class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto i:nums)
        {
            if(m[i]>=1)
            {
                ans.push_back(i);
            }
            else{
                m[i]++;
            }
        }  
        return ans;    
    }
};