class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue<pair<int,int>>q;
        int n=grid.size(),m=grid[0].size(),c=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
        for(int i=0;i<visited.size();i++)
        {
            for(int j=0;j<visited[i].size();j++)
            {
                if(visited[i][j]==0 && grid[i][j]=='1'){
                    c++;
                    // cout<<i<<" "<<j<<" "<<visited[i][j]<<endl;
                    cout<<"vijaya";
                   if(grid[i][j]=='1' )
                    {
                        
                        q.push({i,j});
                        visited[i][j]=1;
                        cout<<i<<" "<<j<<" "<<visited[i][j]<<endl;
                        while(!q.empty())
                        {
                            pair<int,int>p=q.front();
                            q.pop();
                            if(p.first+1 < n){
                                
                        if(grid[p.first+1][p.second]=='1' && visited[p.first+1][p.second]==0) q.push({p.first+1,p.second});
                        visited[p.first+1][p.second]=1;
                            }
                            if(p.second+1 < m){
                               
                        if(grid[p.first][p.second+1]=='1' && visited[p.first][p.second+1]==0) q.push({p.first,p.second+1});
                                 visited[p.first][p.second+1]=1;
                                
                            }
                            if(p.first-1>=0){
                                if(grid[p.first-1][p.second]=='1' && visited[p.first-1][p.second]==0)
                                {
                                    q.push({p.first-1,p.second});
                                }
                                visited[p.first-1][p.second]=1;
                            }
                            if(p.second-1>=0)
                            {
                                if(grid[p.first][p.second-1]=='1' && visited[p.first][p.second-1]==0)
                                {
                                    q.push({p.first,p.second-1});
                                }
                                visited[p.first][p.second-1]=1;
                            }
                        }
                    }
                }
            }
        }
       return c;
        

        
        
    }
};