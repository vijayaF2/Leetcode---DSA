class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        long long prefix=0;
        for(int i=0;i<nums.size();i++)
        {
            prefix+=nums[i];
        }
        long long suffix=LLONG_MAX, ans=LLONG_MIN;
        for(int i=nums.size()-1;i>=1;i--)
        {
            prefix-=nums[i];
            suffix=min(suffix,(long long)nums[i]);
            ans=max(ans,(long long)prefix-suffix);
        }
        return ans;
        
    }
};