class Solution {
public:
    int fun(int m,int n,vector<vector<int>>&dp)
    {
        if(m==0 && n==0) return 1;
        if(dp[m][n]!=-1) return dp[m][n];
        int left=0,right=0; 
        if(m>0) left=fun(m-1,n,dp);
        if(n>0) right=fun(m,n-1,dp);
        return dp[m][n]=left+right;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fun(m-1,n-1,dp);
        
    }
};