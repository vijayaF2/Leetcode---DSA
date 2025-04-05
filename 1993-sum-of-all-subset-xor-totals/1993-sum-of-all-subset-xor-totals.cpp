class Solution {
public:
 void subsets(vector<int>&nums,int idx,int &sum,vector<int>&v)
 {
    if(idx>=nums.size())
    {
        return;
    }
    v.push_back(nums[idx]);
    int x=0;
    for(int i=0;i<v.size();i++)
    {
        x^=v[i];
    }
    sum+=x;
    subsets(nums,idx+1,sum,v);
    cout<<x<<" ";
    v.pop_back();
    subsets(nums,idx+1,sum,v);

 }
    int subsetXORSum(vector<int>& nums) {
        int idx=0,sum=0;
        vector<int>v;
        subsets(nums,idx,sum,v);
        return sum;
    }
};