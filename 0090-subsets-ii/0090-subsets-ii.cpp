class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>s;
        for(int i=0;i<(1<<nums.size());i++)
        {
            vector<int>v;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j)) v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
           s.insert(v);
        }
         vector<vector<int>>ans(s.begin(),s.end());
         return ans;
        
    }
};