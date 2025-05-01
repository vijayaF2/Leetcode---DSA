class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // vector<int>v;
        // vector<int>v1;
        // int c=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]<pivot)
        //     {
        //         v.push_back(nums[i]);
        //     }
        //     else if(nums[i]>pivot){
        //         v1.push_back(nums[i]);
        //     }
        //     else{
        //         c++;
        //     }
        // }
        // while(c>0)
        // {
        //     v.push_back(pivot);
        //     c--;
        // }
        // for(int i=0;i<v1.size();i++)
        // {
        //     v.push_back(v1[i]);
        // }
        // return v;
        int l=0,r=nums.size()-1;
        vector<int>ans(nums.size(),0);
        for(int i=0,j=nums.size()-1;i<nums.size();i++,j--)
        {
            if(nums[i]<pivot)
            {
                ans[l]=nums[i];
                l++;
            }
            if(nums[j]>pivot)
            {
                ans[r]=nums[j];
                r--;
            }
        }
        while(l<=r)
        {
            ans[l]=pivot;
            l++;
        }
        return ans;
        
    }
};