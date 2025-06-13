class Solution {
public:
    int findMaxFish(vector<vector<int>>& grid) {
        int fish=0;
        queue<pair<int,int>>q;
        int r=grid.size(),c=grid[0].size();
        vector<vector<int>>visited(r,vector<int>(c,0));
        int d=0;
        for(int i=0;i<visited.size();i++){
            for(int j=0;j<visited[i].size();j++)
            {
                if(visited[i][j]==0)
                {
                    if(grid[i][j]>0)
                    {
                        q.push({i,j});
                        d+=grid[i][j];
                        cout<<d<<" ";
                    }
                    visited[i][j]=1;
                    while(!q.empty())
                    {
                        pair<int,int>p=q.front();
                        q.pop();
                        if(p.first+1<r){
                            if(grid[p.first+1][p.second]>0 && visited[p.first+1][p.second]==0){
                                q.push({p.first+1,p.second});
                                d+=grid[p.first+1][p.second];
                                cout<<d<<" ";
                            }
                            visited[p.first+1][p.second]=1;
                        }
                        if(p.second+1<c){
                            if(grid[p.first][p.second+1]>0 && visited[p.first][p.second+1]==0){
                                q.push({p.first,p.second+1});
                                d+=grid[p.first][p.second+1];
                                cout<<d<<" ";
                            }
                            visited[p.first][p.second+1]=1;
                        }
                        if(p.first-1>=0){
                            if(grid[p.first-1][p.second]>0 && visited[p.first-1][p.second]==0){
                                q.push({p.first-1,p.second});
                                d+=grid[p.first-1][p.second];
                                cout<<d<<" ";
                            }
                            visited[p.first-1][p.second]=1;
                        }
                        if(p.second-1>=0){
                            if(grid[p.first][p.second-1]>0 && visited[p.first][p.second-1]==0){
                                q.push({p.first,p.second-1});
                                d+=grid[p.first][p.second-1];
                                cout<<d<<" ";
                            }
                            visited[p.first][p.second-1]=1;
                        }
                        fish=max(fish,d);
                        // cout<<c<<"c";
                        
                    }
                    d=0;
                }
            }
        }
       return fish;
        
    }
};