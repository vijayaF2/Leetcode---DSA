class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        int i=0,j=nums.size()-1,c=0;
        while(i<j)
        {
            if(nums[i]==val){
                while(i<j && nums[j]==val)
                {
                    j--;
                }
                if(i<j){
                    swap(nums[i],nums[j]);
                    c++;
                }
                j--;
            }
            else{
                c++;
            }
            i++;
        }
        if(i==j && nums[i]!=val) c++;
        return c;
    }
};