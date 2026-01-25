class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int c=0;
        for( int i=nums.size()-1;i>0;i--)
        {
            if(i<0 || nums[i]<=nums[i-1]) break;
            else{
                c++;
                cout<<c<<endl;
            }
        }
        return (c==nums.size())?0:nums.size()-(c+1);
        
    }
};