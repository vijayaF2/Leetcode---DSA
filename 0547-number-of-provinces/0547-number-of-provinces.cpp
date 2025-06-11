class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected.size();j++)
            {
                if(isConnected[i][j]==1) adj[i+1].push_back(j+1);
            }
        }
        int c=0,n=isConnected.size();
        queue<int>q;
        vector<int>visited(n+1,0);
        for(int i=1;i<=n;i++)
        {
            if(visited[i]==0)
            {
                q.push(i);
               c++;
                while(!q.empty())
                {
                    int x=q.front();
                    visited[x]=1;
                    q.pop();
                    for(int j=0;j<adj[x].size();j++)
                    {
                        if(visited[adj[x][j]]==0) q.push(adj[x][j]);
                        visited[adj[x][j]]=1;
                    }
                   
                }
            }
        }
        return c;
        
    }
};