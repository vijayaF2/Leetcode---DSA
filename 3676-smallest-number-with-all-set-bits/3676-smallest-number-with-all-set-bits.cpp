class Solution {
public:
    int smallestNumber(int n) {
        bool flag=true;
        int ans;
        while(flag==true)
        {
            string s="";
            int temp=n,c=0;
            while(temp>0)
            {
                s+=(temp%2);
                if(temp%2==1) c++;
                temp=temp/2;
            }        
            if(c==s.size()) {
                ans=n;
                flag=false;
            }
            n++;
           
        }
        return ans;
    }
};