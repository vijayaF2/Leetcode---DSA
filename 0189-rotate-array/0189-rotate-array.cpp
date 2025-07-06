class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       ///// without using extra space:
       /// if k exceeds the size of the array 
    //    k=k%nums.size();
    //    reverse(nums.begin(),nums.end());
    //    reverse(nums.begin(),nums.begin()+k);
    //    reverse(nums.begin()+k,nums.end());


        /// with using extra space:
        vector<int>ans(nums.begin(),nums.end());
        for(int i=0;i<ans.size();i++)
        {
            nums[(i+k)%nums.size()]=ans[i];
        } 
    }
};