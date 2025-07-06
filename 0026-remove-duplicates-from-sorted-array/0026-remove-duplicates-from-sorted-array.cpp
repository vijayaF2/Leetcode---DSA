class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int,int>m;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        // }
        // int j=0;
        // for(auto i:m)
        // {
        //     nums[j++]=i.first;
        // }
        // return j;
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
          if(nums[i]!=nums[i-1])
          {
            nums[k++]=nums[i];
          }
        }
        return k;
        
    }
};