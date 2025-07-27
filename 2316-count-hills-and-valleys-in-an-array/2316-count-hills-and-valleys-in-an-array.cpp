class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int c=0;
        int i=1;
        while(i<nums.size()-1){
            int j=i-1,k=i+1;
            while(j>=0 && nums[j]==nums[i]){
                j--;
            }
            while(k<nums.size() && nums[k]==nums[i]){
                k++;
            }
            if(j>=0 && k<nums.size() && nums[i]<nums[j] && nums[i]<nums[k]) c++;
            else if(j>=0 && k<nums.size() && nums[i]>nums[j] && nums[i]>nums[k]) c++;
            i=k;
        }
        return c;
    }
};