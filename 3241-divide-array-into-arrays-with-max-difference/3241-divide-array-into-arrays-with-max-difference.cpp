class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>v;
        for(int i=0;i<nums.size();i+=3){
            if(nums[i]-nums[i+1] <=k &&  nums[i]-nums[i+2]<=k && nums[i+1] - nums[i+2]<=k && nums[i+1]-nums[i] <=k && nums[i+2]-nums[i]<=k && nums[i+2]-nums[i+1]<=k)
            {
                v.push_back(nums[i]);
                v.push_back(nums[i+1]);
                v.push_back(nums[i+2]);
                ans.push_back(v);
                v.clear();
            }
            else{
                ans.clear();
                return ans;
            }

        }
        return ans;
        
    }
};