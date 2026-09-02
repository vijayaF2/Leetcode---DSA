class Solution {
public:
    int fun(int i,int sum,int amount,vector<int>&coins,vector<vector<int>>&dp)
    {
        if(sum==amount) return 1;
        if(i==coins.size() || sum>amount) return 0;
        if(dp[i][sum]!=-1) return dp[i][sum];
        int left=0;
        if(sum+coins[i]<=amount) left=fun(i,sum+coins[i],amount,coins,dp);
        int right=fun(i+1,sum,amount,coins,dp);
        return dp[i][sum]=left+right;
    }
    int change(int amount, vector<int>& coins) {
        int i=0,sum=0;
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return fun(i,sum,amount,coins,dp);
        
    }
};