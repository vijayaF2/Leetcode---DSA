class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int,int>m;
        int ans=INT_MIN;
        for(int i=1;i<=n;i++)
        {
             if(i<10)
             {
                m[i]++;
                ans=max(ans,m[i]);
             }
             else{
                int temp=i;
                int sum=0;
                while(temp>0)
                {
                    int x=temp%10;
                    sum+=x;
                    temp=temp/10;
                }
                m[sum]++;
                ans=max(ans,m[sum]);
             }
             
        }
        int c=0;
        for(auto j:m)
        {
            if(j.second==ans)
            {
                c++;
            }
        }
        return c;
        
    }
};