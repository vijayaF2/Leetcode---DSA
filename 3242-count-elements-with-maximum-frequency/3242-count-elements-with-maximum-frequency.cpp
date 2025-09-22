class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int maxi=INT_MIN;
        for(auto i:nums)
        {
            m[i]++;
            maxi=max(maxi,m[i]);
        }
        int c=0;
        for(auto i:m)
        {
            if(i.second==maxi) c+=i.second;
        }
        return c;
        
    }
};