class Solution {
public:
    int fun(int i,int j,vector<int>&nums,vector<int>&dp)
    {
        if(i>j) return 0;
        if(dp[i]!=-1) return dp[i];
        int lefts=fun(i+2,j,nums,dp)+nums[i];
        int rights=fun(i+1,j,nums,dp);
        return dp[i]=max(lefts,rights);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int i=0,j=nums.size()-2;
        vector<int>dp(nums.size(),-1);
        int left=fun(i,j,nums,dp);
        i=1,j=nums.size()-1;
        dp.assign(nums.size(),-1);
        int right=fun(i,j,nums,dp);
        return max(right,left);
        
    }
};