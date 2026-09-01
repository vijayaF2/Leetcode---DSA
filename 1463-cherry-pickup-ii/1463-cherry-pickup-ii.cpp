class Solution {
public:
    int fun(int i,int j1,int j2, vector<vector<int>>&grid, vector<vector<vector<int>>>&dp)
    {
        if(j1<0 || j1>grid[0].size()-1 || j2<0 || j2>grid[0].size()-1) return -1e8;
        if(i==grid.size()-1){
            if(j1==j2) return grid[i][j1];
            else{
                return grid[i][j1]+grid[i][j2];
            }
            }
            if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
            int maxi=INT_MIN;
            for(int k1=-1;k1<=1;k1++)
            {
                for(int k2=-1;k2<=1;k2++){
                    if(j1==j2) maxi=max(maxi,grid[i][j1]);
                    else{
                        maxi=max(maxi,grid[i][j1]+grid[i][j2]+fun(i+1,j1+k1,j2+k2,grid,dp));
                    }
                }
            }
            return dp[i][j1][j2]= maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int i=0,j1=0,j2=grid[0].size()-1;
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(grid[0].size(),-1)));
        return fun(i,j1,j2,grid,dp);
        
    }
};