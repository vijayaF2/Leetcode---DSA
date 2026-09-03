class Solution {
public:
    int fun(int i,int con,int offset,vector<int>&nums,vector<vector<int>>&dp)
    {
        if(i==nums.size()) return 0;
        if(dp[i][con+offset]!=-1) return dp[i][con+offset];
        int left=0;
        if(nums[i]>con) left=1+fun(i+1,nums[i],offset,nums,dp);
        int right=fun(i+1,con,offset,nums,dp);
        return dp[i][con+offset]=max(left,right);
    }
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int i=0,con=mini-1;
        int abmini=abs(mini),abmaxi=abs(maxi);
        int big=max(abmaxi,abmini);
        int offset=big+1;
        vector<vector<int>>dp(nums.size()+1,vector<int>(2*big+2,-1));
        return fun(i,con,offset,nums,dp);
        
    }
};