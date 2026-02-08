class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int num=0,dem=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            num+=nums[i];
        }
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            num-=nums[i];
            dem--;
            if(nums[i]> (num/dem)) ans++;
        }
        return ans;
        
    }
};