class Solution {
public:
    int largestInteger(int n, int s) {
        if(s==0) return 0;
        if(n==1){
            for(int i=9;i>=0;i--)
            {
                if(i==s) return i;
            }
        }
        else if(n==2)
        {
            for(int i=99;i>=0;i--)
            {
                int temp=i;
                int sum=0;
                while(temp>0)
                {
                   sum+=temp%10;
                   temp=temp/10;
                }
                if(sum==s) return i;
            }
        }
        else if(n==3){
            for(int i=999;i>=0;i--)
            {
                int temp=i;
                int sum=0;
                while(temp>0)
                {
                   sum+=temp%10;
                   temp=temp/10;
                }
                if(sum==s) return i;
            }
        }
        else if(n==4){
            for(int i=9999;i>=0;i--)
            {
                int temp=i;
                int sum=0;
                while(temp>0)
                {
                   sum+=temp%10;
                   temp=temp/10;
                }
                if(sum==s) return i;
            }
        }
        else if(n==5)
        {
            for(int i=99999;i>=0;i--)
            {
                int temp=i;
                int sum=0;
                while(temp>0)
                {
                   sum+=temp%10;
                   temp=temp/10;
                }
                if(sum==s) return i;
            }
        }
        return -1;
        
    }
};