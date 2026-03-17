class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            m[nums[i]]++;
            
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0 && m[nums[i]]<2){
                ans=nums[i];
                break;
            }
        }
        return ans;
        
    }
};