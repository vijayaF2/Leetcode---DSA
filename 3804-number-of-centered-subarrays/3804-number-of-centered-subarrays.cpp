class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            unordered_map<int,int>m;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                m[nums[j]]++;
                if(m[sum]>0) c++;
            }
        }
        return c;
        
    }
};