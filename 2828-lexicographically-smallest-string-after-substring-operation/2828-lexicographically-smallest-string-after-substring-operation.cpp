class Solution {
public:
    string smallestString(string s) {
        unordered_map<char,int>m;
        for(auto i:s)
        {
            m[i]++;
        }
        if(s[0]!='a')
        {
            int i=0;
            while(s[i]!='a' && i<s.size())
            {
                s[i]=(char)((int)s[i]-1);
                i++;
            }
        }
        else if(m.size()==1 && s[0]=='a')
        {
            s[s.size()-1]='z';
        }
        else{
            int i=0;
            while(s[i]=='a')
            {
                i++;
            }
            while(i<s.size() && s[i]!='a')
            {
                s[i]=(char)((int)s[i]-1);
                i++;
            }
        }
        return s;
        
    }
};