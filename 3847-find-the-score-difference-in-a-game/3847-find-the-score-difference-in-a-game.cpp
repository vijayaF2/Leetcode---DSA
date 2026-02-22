class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first=0,second=0;
        int flag=0;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]%2!=0)
             {
                if((i+1)%6!=0){
                if(flag==0) flag=1;
                else{
                    flag=0;
                }
                }
                if(flag==0) first+=nums[i];
                else{
                    second+=nums[i];
                }
             }
             else{
                if((i+1)%6==0){
                    if(flag==0) flag=1;
                    else{
                        flag=0;
                    }
                }
                if(flag==0) first+=nums[i];
                else{
                    second+=nums[i];
                }
             }
             cout<<first<<" "<<second<<endl;
        }
        return first-second;
        
    }
};