class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<edges.size();i++)
        {
            m[edges[i][0]].push_back(edges[i][1]);
            m[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>visited(edges.size()+10,0);
        queue<int>q;
        q.push(1);
        visited[1]=1;
        int maxi=1,ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto i:m[node]){
                if(visited[i]==0)
                {
                    q.push(i);
                }
                visited[i]++;
                if(visited[i]>=maxi)
                {
                    maxi=visited[i];
                    ans=i;
                }
            }
        }
        return ans;

        
    }
};