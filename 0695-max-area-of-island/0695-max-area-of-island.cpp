class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int r=grid.size(),c=grid[0].size();
        vector<vector<int>>visited(r,vector<int>(c,0));
        int island=0,c1=0;
        for(int i=0;i<visited.size();i++)
        {
            for(int j=0;j<visited[i].size();j++)
            {
                if(visited[i][j]==0 && grid[i][j]!=0)
                {
                    q.push({i,j});
                    visited[i][j]=1;
                    c1++;
                    while(!q.empty())
                    {
                        pair<int,int>p=q.front();
                        q.pop();
                        if(p.first+1 <r)
                        {
                            if(grid[p.first+1][p.second]==1 && visited[p.first+1][p.second]==0)
                            {
                                q.push({p.first+1,p.second});
                                visited[p.first+1][p.second]=1;
                                c1++;
                            }
                        }
                        if(p.second+1 <c)
                        {
                            if(grid[p.first][p.second+1]==1 && visited[p.first][p.second+1]==0)
                            {
                                q.push({p.first,p.second+1});
                                visited[p.first][p.second+1]=1;
                                c1++;
                            }
                        }
                        if(p.first-1 >=0)
                        {
                            if(grid[p.first-1][p.second]==1 && visited[p.first-1][p.second]==0)
                            {
                                q.push({p.first-1,p.second});
                                visited[p.first-1][p.second]=1;
                                c1++;
                            }
                        }
                        if(p.second-1 >=0)
                        {
                            if(grid[p.first][p.second-1]==1 && visited[p.first][p.second-1]==0)
                            {
                                q.push({p.first,p.second-1});
                                visited[p.first][p.second-1]=1;
                                c1++;
                            }
                        }
                    }
                    island=max(island,c1);
                    c1=0;
                }
            }
        }
         return island;
        
    }
};