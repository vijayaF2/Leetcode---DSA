class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int i=0,k=1;
        unordered_map<int,int>m;
        vector<int>v;
        vector<int>v1;
        while(i<nums.size()-1)
        {
            while(i<nums.size()-1 && nums[i]>=nums[i+1])
            {
                i++;
            }
            int left=i;
            while(i<nums.size()-1 && nums[i]<nums[i+1])
            {
                i++;
            }
            v.push_back(i);
          int len=i-left+1;
            m[left]=len;
            v1.push_back(len);
            // cout<<v.size()<<" ";
            if(m[left-len]==len)
            {
                k=max(k,len);
                cout<<left<<"p "<<i<<" "<<k;
                cout<<endl;
            } 
            else if(v.size()>1 && left-v[v.size()-2]==1){
                // cout<<v1[v1.size()-2]<<"k";
                int len1=min(len,v1[v1.size()-2]);
                k=max(k,len1);
                k=max(k,len/2);
                cout<<left<<"q "<<i<<" "<<k;
                cout<<endl;
            }
            else{
                k=max(k,len/2);
                cout<<left<<"r "<<i<<" "<<k;
                cout<<endl;
            }
            
        }
        return k;
        
    }
};