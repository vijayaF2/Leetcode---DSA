class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0,right=0;
        unordered_map<int,int>m;
        int ans=INT_MIN;
        while(right<nums.size())
        {
            while(right<nums.size() && (m[nums[right]])+1 <=k){
                m[nums[right++]]++;
            }
            ans=max(ans,right-left);
            while(left<right && right<nums.size() && (m[nums[right]])+1 >k){
                m[nums[left]]--;
                if(m[nums[left]]<=0) m.erase(nums[left]);
                left++;
            }
            ans=max(ans,right-left);
        }
        return ans;
        
    }
};