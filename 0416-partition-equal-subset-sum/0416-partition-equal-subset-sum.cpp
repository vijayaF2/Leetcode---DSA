class Solution {
public:
   int count=0;
   bool fun(int i,int sum,int target,vector<int>&nums,vector<vector<int>>&dp)
   {
    if(sum==target){
         count++;
         return 1;
         if(count==2) return true;
    }
    if(i==nums.size() || sum>target) return false;
    if(dp[i][sum]!=-1) return dp[i][sum];
    bool left=fun(i+1,sum+nums[i],target,nums,dp);
    bool right=fun(i+1,sum,target,nums,dp);
    return dp[i][sum]=left || right;
   }
    bool canPartition(vector<int>& nums) {
        int sum=0,i=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        int target=sum/2;
        sum=0;
        vector<vector<int>>dp(nums.size(),vector<int>(target,-1));
        return fun(i,sum,target,nums,dp);
       
        
    }
};