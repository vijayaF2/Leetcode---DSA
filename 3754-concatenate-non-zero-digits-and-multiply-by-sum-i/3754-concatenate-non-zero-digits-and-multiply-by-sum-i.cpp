class Solution {
public:
    long long sumAndMultiply(int n) {
        vector<int>v;
        while(n>0)
        {
            if(n%10 !=0) v.push_back(n%10);
            n=n/10;
        }
        long long ans=0;
        long long sum=0;
        for(int i=v.size()-1;i>=0;i--){
            ans=ans*10+v[i];
            sum+=v[i];
        }
        return ans*sum;
        
    }
};