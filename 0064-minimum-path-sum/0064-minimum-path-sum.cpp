class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&grid,vector<vector<int>>&dp)
    {
        if(i==0 && j==0) return grid[0][0];
        if(dp[i][j]!=-1) return dp[i][j];
        int left=INT_MAX,right=INT_MAX;
        if(i>0) left=grid[i][j]+fun(i-1,j,grid,dp);
        if(j>0) right=grid[i][j]+fun(i,j-1,grid,dp);
        return dp[i][j]=min(left,right);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int i=grid.size()-1,j=grid[0].size()-1;
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        return fun(i,j,grid,dp);
        
    }
};