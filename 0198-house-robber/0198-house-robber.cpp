class Solution {
public:
    int fun(int i,vector<int>&nums,vector<int>&dp){
        if(i>=nums.size()) return 0;
        if(dp[i]!=-1) return dp[i];
        int left=fun(i+2,nums,dp)+nums[i];
        int right=fun(i+1,nums,dp);
        return dp[i]=max(left,right);
    }
    int rob(vector<int>& nums) {
        int i=0;
        vector<int>dp(nums.size(),-1);
        return fun(i,nums,dp);
        
    }
};