class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        unordered_map<int,vector<pair<int,int>>>m;
        for(int i=0;i<times.size();i++)
        {
            m[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        vector<int>visited(n,0);
        vector<int>path(n,0);
        queue<pair<int,int>>q;
        q.push({k,0});
        visited[k-1]=1;
        path[k-1]=0;
        int mini=INT_MAX;
        while(!q.empty())
        {
            pair<int,int>p=q.front();
            q.pop();
            for(int i=0;i<m[p.first].size();i++)
            {
                pair<int,int>p1=m[p.first][i];
                 if(visited[p1.first-1]==0){
                    q.push({p1.first,p.second+p1.second});
                    visited[p1.first-1]=1;
                    path[p1.first-1]=p.second+p1.second;
                 }
                 else{
                    if(p.second+p1.second < path[p1.first-1])
                    {
                        path[p1.first-1]=p.second+p1.second;
                        q.push({p1.first,p.second+p1.second});
                    }
                 }
            }
        }
        if(find(visited.begin(),visited.end(),0)!=visited.end()) return -1;
        else{
            return *max_element(path.begin(),path.end());
        }
        
    }
};