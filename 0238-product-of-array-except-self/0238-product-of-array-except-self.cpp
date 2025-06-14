class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans;
        int c=0;
        int total=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0) total*=nums[i];
            else{
                c++;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(c>1) ans.push_back(0);
            else if(nums[i]==0){
                ans.push_back(total);
            }
            else if(nums[i]!=0 && c>0){
                ans.push_back(0);
            }
            else{
                ans.push_back(total/nums[i]);
            }
        }
        return ans;
        
    }
};