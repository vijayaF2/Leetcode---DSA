class Solution {
public:
    int minMaxDifference(int num) {
        vector<int>v;
        vector<int>v1;
        int temp=num;
        while(temp>0)
        {
            v.push_back(temp%10);
            v1.push_back(temp%10);
            temp=temp/10;
        }
        
        int r;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]<9)
            {
                r=v[i];
                v[i]=9;
                break;
            }
        }
        
        int r1;
        for(int i=v1.size()-1;i>=0;i--)
        {
            if(v1[i]>0)
            {
                r1=v1[i];
                v1[i]=0;
                break;
            }
        }
        cout<<"v";
        int maxi=0,mini=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==r){
                v[i]=9;
            }
            if(v1[i]==r1)
            {
                v1[i]=0;
            }
            maxi=maxi*10+v[i];
            mini=mini*10+v1[i];
        }
        cout<<maxi<<" "<<mini;
        return maxi-mini;
        
    }
};