class Solution {
public:
    int nextBeautifulNumber(int n) {
        int flag=0;
        unordered_map<int,int>m;
        while(flag==0)
        {
            n++;
            int temp=n;
            m.clear();
            while(temp>0)
            {
                int x=temp%10;
                m[x]+=1;
                temp=temp/10;
            }
            int c=0;
            for(auto i:m)
            {
                if(i.first==i.second)
                {
                   c++;   
                }
                else{
                    break;
                }
            }
            if(m.size()==c)
            {
                flag=1;
            }
        //    cout<<n<<" ";
        }
        return n;
    }
};