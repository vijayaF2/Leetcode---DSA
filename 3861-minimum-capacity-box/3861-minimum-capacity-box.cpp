class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int ans=INT_MAX,idx=-1;
        for(int i=capacity.size()-1;i>=0;i--)
        {
            if(capacity[i]>=itemSize)
            {
                if(capacity[i]<=ans) idx=i;
                ans=min(ans,capacity[i]);
            }
        }
        return idx;
        
    }
};