class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&obstacleGrid,vector<vector<int>>&dp){
        if(i==0 && j==0) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        int left=0,right=0;
        if(i>0 && obstacleGrid[i][j]==0) left=fun(i-1,j,obstacleGrid,dp);
        if(j>0 && obstacleGrid[i][j]==0) right=fun(i,j-1,obstacleGrid,dp);
        return dp[i][j]=left+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i1=obstacleGrid.size(),j1=obstacleGrid[0].size();
        int i=obstacleGrid.size()-1,j=obstacleGrid[0].size()-1;
         if(i1==1 && j1==1 && obstacleGrid[0][0]==0) return 1;
        if(i1==1 && j1==1 && obstacleGrid[0][0]==1) return 0;
        if(obstacleGrid[i][j]==1 || obstacleGrid[0][0]) return 0;
        vector<vector<int>>dp(i1,vector<int>(j1,-1));
        return fun(i,j,obstacleGrid,dp);
        
    }
};