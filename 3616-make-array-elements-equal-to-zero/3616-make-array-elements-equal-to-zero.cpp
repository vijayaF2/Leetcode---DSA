class Solution {
public:
    bool select(vector<int>nums, int start,int direction)
    {
        int curr=start;
        while(curr<nums.size() && curr>=0)
        {
        if(nums[curr]==0)
        {
            
            curr+=direction;
            
        }
        else if(nums[curr]>0)
        {
            nums[curr]-=1;
            direction*=-1;
            curr+=direction;
        }
      }
        for(int j=0; j<nums.size();j++)

            {
                if(nums[j]!=0)
                {
                    return false;
                }
            }
        return true;
    }
    
    int countValidSelections(vector<int>& nums) {
        int c=0;
        for(int i=0; i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                if(select(nums,i,1))
                {
                    c++;
                }
                if(select(nums,i,-1))
                {
                    c++;
                }
            }
        }
      return c;  
       
    }
};