class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        vector<int>primes(105,1);
        primes[0]=primes[1]=0;
        for(int i=2;i<primes.size()/2;i++)
        {
            if(primes[i]==1){
                for(int j=i*2;j<primes.size();j+=i)
                {
                    primes[j]=0;
                }
            }
        }
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto i:m)
        {
            // cout<<i.second<<" "<<primes[i.second]<<endl;
            if(primes[i.second]==1) return true;
        }
        return false;

        
    }
};