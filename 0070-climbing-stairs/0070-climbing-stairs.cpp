class Solution {
public:
    int fun(int n, int sum,vector<int>&dp){
        if(sum==n) return 1;
        if(sum>n) return 0;
        if(dp[sum]!=-1) return dp[sum];
        return dp[sum]=fun(n,sum+1,dp)+fun(n,sum+2,dp);
    }
    int climbStairs(int n) {
        int sum=0;
        vector<int>dp(n+1,-1);
        return fun(n,sum,dp);     
    }
};