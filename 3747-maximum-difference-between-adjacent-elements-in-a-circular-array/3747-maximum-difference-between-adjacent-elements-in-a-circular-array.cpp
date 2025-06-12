class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi=INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            maxi=max(abs(nums[i]-nums[i-1]),maxi);
        }
        maxi=max(abs(nums[nums.size()-1]-nums[0]),maxi);
        return maxi;
        
    }
};