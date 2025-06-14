class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>m;
        int d=0;
        for(int i=0;i<edges.size();i++)
        {
            m[edges[i][0]].push_back(edges[i][1]);
            m[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int>q;
        vector<int>visited(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            vector<int>ans;
            q.push(i);
            visited[i]=1;
            ans.push_back(i);
            while(!q.empty())
            {
                int x=q.front();
                q.pop();
                for(auto j:m[x]){
                    if(visited[j]==0){
                        q.push(j);
                        visited[j]=1;
                        ans.push_back(j);
                    }
                }
            }
            d=0;
            for(int i=0;i<ans.size();i++)
            {
                 int y=ans[i];
                 if(m[y].size()==ans.size()-1)
                 {
                    d++;
                 }
            }
            if(d==ans.size()) c++;
        }
        return c;

        
    }
};