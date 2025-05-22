class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>v(nums.size()+1,0);
        int i=0;
        while(i<queries.size())
        {
            v[queries[i][0]]+=1;
            v[queries[i][1]+1]-=1;
            i++;
        }
        if(v[0]<nums[0]) return false;
        for(int i=1;i<v.size() && i<nums.size();i++)
        {
            v[i]=v[i]+v[i-1];
            if(v[i]<nums[i]) return false;
        }
        return true;
        
    }
};