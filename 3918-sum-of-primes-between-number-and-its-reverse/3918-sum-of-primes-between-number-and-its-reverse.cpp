class Solution {
public:
    vector<bool>prime=vector<bool>(1001,true);
    void seive(){
          prime[0]=prime[1]=false;
          for(int i=2;i<=prime.size()/2;i++)
          {
             if(prime[i]==true){
                for(int j=i+i;j<prime.size();j+=i){
                    prime[j]=false;
                }
             }
          }
    }
    int sumOfPrimesInRange(int n) {
        int temp=n;
        int rev=0;
        while(temp>0){
            rev=rev*10+(temp%10);
            temp=temp/10;
        }
        int ans=0;
        seive();
        for(int i=min(n,rev);i<=max(n,rev);i++)
        {
           if(prime[i]==true) ans+=i;
        }
        return ans;

        
    }
};