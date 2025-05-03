class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int>m;
        unordered_map<int,int>m1;
        int ma1=INT_MIN;
        int ma2=INT_MIN;
        int n,n1;
        for(auto i:tops)
        {
            m[i]+=1;
            if(m[i]>ma1)
            {
                ma1=m[i];
                n=i;
            }
        }
        for(auto i:bottoms)
        {
            m1[i]+=1;
            if(m1[i]>ma2)
            {
                ma2=m1[i];
                n1=i;
            }
        }
        int c=0;
        if(ma2>=ma1)
        {
            for(int i=0;i<bottoms.size();i++)
            {
                 if(bottoms[i]!=n1 && tops[i]==n1)
                 {
                    c++;
                 }
                 else if(bottoms[i]!=n1 && tops[i]!=n1)
                 {
                   return -1;
                   break;
                 }
            }
        }
        else{
            for(int i=0;i<tops.size();i++)
            {
                if(tops[i]!=n && bottoms[i]==n)
                {
                    c++;
                }
                else if(tops[i]!=n && bottoms[i]!=n)
                {
                    
                    return -1;
                    break;
                }
            }

        }
        cout<<n1;
        return c;

        
    }
};