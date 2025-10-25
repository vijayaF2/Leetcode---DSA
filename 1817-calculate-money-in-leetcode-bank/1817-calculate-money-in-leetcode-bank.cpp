class Solution {
public:
    int totalMoney(int n) {
        int m=1;
        int i=1,temp=1;
        int sum=0;
        while(n>0)
        {
           if(temp%8!=0)
           {
            sum+=i;
            cout<<i<<" ";
            i++;
            temp++;
           }
           else{
            m++;
            sum+=m;
            cout<<m<<" ";
            i=m+1;
            temp=2;
           }
           n--;
        }
        return sum;

        
    }
};