class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        unordered_map<int,vector<pair<int,int>>>m;
        for(int i=0;i<flights.size();i++)
        {
            m[flights[i][0]].push_back({flights[i][1],flights[i][2]});
        }
        queue<pair<int,pair<int,int>>>q;
        vector<int>visited(n,0);
        vector<int>path(n,0);
        q.push({src,{0,-1}});
        visited[src]=1;
        path[src]=0;
        while(!q.empty())
        {
            pair<int,pair<int,int>>p=q.front();
            int cost=p.second.first;
            int stops=p.second.second;
            q.pop();
            for(int i=0;i<m[p.first].size();i++)
            {
                pair<int,int>p1=m[p.first][i];
                if(visited[p1.first]==0 && stops+1<=k)
                {
                    q.push({p1.first,{cost+p1.second,stops+1}});
                    visited[p1.first]=1;
                    path[p1.first]=cost+p1.second;
                }
                else{
                    if(cost+p1.second < path[p1.first] && stops+1<=k)
                    {
                        q.push({p1.first,{cost+p1.second,stops+1}});
                        path[p1.first]=cost+p1.second;
                    }
                }

            }
        }
        if(visited[dst]==0) return -1;
        else{
            return path[dst];
        }
        
    }
};