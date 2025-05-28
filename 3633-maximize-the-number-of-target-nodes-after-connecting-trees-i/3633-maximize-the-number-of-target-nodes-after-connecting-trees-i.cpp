class Solution {
public:
    int bfs(unordered_map<int,vector<int>>&adj,int node,int k)
    {
        priority_queue<pair<int,int> ,vector<pair<int,int>> , greater<pair<int,int>>>q;
        vector<int>visited(adj.size(),0);
        q.push({0,node});
        visited[node]=1;
        int count=0;
        while(!q.empty())
        {
            int c=q.top().second;
            int dis=q.top().first;
            q.pop();
            if(dis>k) break;
            count++;
            for(int i=0;i<adj[c].size();i++)
            {
                if(visited[adj[c][i]]==0)
                {
                    visited[adj[c][i]]=1;
                    q.push({dis+1,adj[c][i]});
                }
            }

        }
        return count;
    }
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        unordered_map<int,vector<int>>m1;
        unordered_map<int,vector<int>>m2;
        for(int i=0;i<edges1.size();i++)
        {
            m1[edges1[i][0]].push_back(edges1[i][1]);
            m1[edges1[i][1]].push_back(edges1[i][0]);
        }
        for(int i=0;i<edges2.size();i++)
        {
            m2[edges2[i][0]].push_back(edges2[i][1]);
            m2[edges2[i][1]].push_back(edges2[i][0]);
        }
        vector<int>ans;
        for(int i=0;i<=edges1.size();i++)
        {
            int target=bfs(m1,i,k);
            ans.push_back(target);
            cout<<target<<" ";
        }
        int target2=0;
        for(int i=0;i<=edges2.size();i++)
        {
            int target=bfs(m2,i,k-1);
            target2=max(target2,target);
        }
        // cout<<target2;
        for(int i=0;i<ans.size();i++)
        {
            ans[i]+=target2;
        }
        return ans;
        
    }
};