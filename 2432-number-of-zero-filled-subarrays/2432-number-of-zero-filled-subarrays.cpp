class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long left=0,right=0;
        long long ans=0;
        while(right<nums.size())
        {
            while(right<nums.size() && nums[right]==0){
                right++;
            }
           long long d=right-left;
           ans+=(d*(d+1))/2;
           right++;
           left=right;
        }
       return ans; 
    }
};