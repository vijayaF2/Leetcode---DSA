class Solution {
public:
   int fun(int i,int sum, int target,int offset,vector<int>&nums,vector<vector<int>>&dp)
   {
    if(i==nums.size() && sum==target) return 1;
    if(i==nums.size()) return 0;
    if(dp[i][sum+offset]!=-1) return dp[i][sum+offset];
    int left=fun(i+1,sum-nums[i],target,offset,nums,dp);
    int right=fun(i+1,sum+nums[i],target,offset,nums,dp);
    return dp[i][sum+offset]=left+right;
   }
    int findTargetSumWays(vector<int>& nums, int target) {
        int i=0,sum=0,total=0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }
        int offset=total;
        vector<vector<int>>dp(nums.size(),vector<int>(2*total+1,-1));
        return fun(i,sum,target,offset,nums,dp);
        
    }
};