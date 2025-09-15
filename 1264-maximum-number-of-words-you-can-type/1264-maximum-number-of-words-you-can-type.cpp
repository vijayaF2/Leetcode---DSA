class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int ans=0;
        unordered_map<char,int>m;
        for(auto i:brokenLetters)
        {
            m[i]++;
        }
        bool flag=true;
        for(int i=0;i<text.size();i++)
        {
            if(text[i]!=' ')
            {
                if(m[text[i]]>0)
                {
                    while(i<text.size() && text[i]!=' ')
                    {
                        i++;
                    }
                    i--;
                    flag=false;
                } 
            }
            else{
                if(flag==true) ans++;
                flag=true;
            }
        }
        if(flag==true) ans++;
        return ans;
        
    }
};