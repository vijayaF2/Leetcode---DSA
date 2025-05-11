class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>m;
        int v=0;
        int c=0;
        for(auto i:s)
        {
            m[i]+=1;
            if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
            {
                if(m[i]>v) v=m[i];
            }
            else{
                if(m[i]>c) c=m[i];
            }
        }
        return c+v;
        
    }
};