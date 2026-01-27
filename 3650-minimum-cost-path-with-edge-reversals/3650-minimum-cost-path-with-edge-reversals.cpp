class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<pair<int,int>>>m;
        for(int i=0;i<edges.size();i++)
        {
            m[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            m[edges[i][1]].push_back({edges[i][0],2*edges[i][2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
        q.push({0,0});
        vector<int>dist(n,INT_MAX);
        dist[0]=0;
        while(!q.empty())
        {
            pair<int,int>p=q.top();
            q.pop();
            int u=p.second;
            for(int i=0;i<m[u].size();i++)
            {
                pair<int,int>p1=m[u][i];
                int v=p1.first;
                int weight=p1.second;
                if(dist[v]>weight+p.first){
                    dist[v]=weight+p.first;
                    q.push({weight+p.first,v});
                }
            }
        }
        return (dist[n-1]==INT_MAX)?-1:dist[n-1];
        
    }
};