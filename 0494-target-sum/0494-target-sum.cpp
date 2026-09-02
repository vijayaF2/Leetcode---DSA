class Solution {
public:
   int fun(int i,int sum, int target,vector<int>&nums)
   {
    if(i==nums.size() && sum==target) return 1;
    if(i==nums.size()) return 0;
    int left=fun(i+1,sum-nums[i],target,nums);
    int right=fun(i+1,sum+nums[i],target,nums);
    return left+right;
   }
    int findTargetSumWays(vector<int>& nums, int target) {
        int i=0,sum=0;
        return fun(i,sum,target,nums);
        
    }
};