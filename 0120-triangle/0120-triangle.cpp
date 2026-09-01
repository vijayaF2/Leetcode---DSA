class Solution {
public:
    int fun(int i,int j,vector<vector<int>>&triangle,vector<vector<int>>&dp){
        if(i>triangle.size()-1) return 0;
        if(dp[i][j]!=1e9) return dp[i][j];
        int left=triangle[i][j]+fun(i+1,j,triangle,dp);
        int right=triangle[i][j]+fun(i+1,j+1,triangle,dp);
        return dp[i][j]=min(left,right);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int i=0;
        int j=0;
        vector<vector<int>>dp(triangle.size(),vector<int>(triangle.size(),1e9));
        return fun(i,j,triangle,dp);
        
    }
};