class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                sum+=nums[i];
            }
        }
        vector<int>v(queries.size(),0);
        int i=0;
        while(i<queries.size()){
            int j=nums[queries[i][1]];
            if(j%2==0){
                sum-=j;
            }
            nums[queries[i][1]]+=queries[i][0];
            if((j+queries[i][0])%2==0){
                sum+=j+queries[i][0];
            }
            v[i]=sum;
            i++;
        }
        return v;
        
    }
};