class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=0;
        int i=0,j=nums.size()-1;
        while(i<nums.size()){
            while(j>i){
            if(nums[j]-nums[i]==1)
            {
                m=max(m,j-i+1);
                break;
            }
            j--;
            }
            i++;
            j=nums.size()-1;

        }
        return m;
    }
};