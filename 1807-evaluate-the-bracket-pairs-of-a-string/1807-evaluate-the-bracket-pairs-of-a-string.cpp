class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>m;
        for(int i=0;i<knowledge.size();i++)
        {
            m[knowledge[i][0]]=knowledge[i][1];
        }
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                i++;
                string s1;
                while(s[i]!=')')
                {
                    s1+=s[i];
                    i++;
                }
                if(m[s1].size()>=1){
                    ans+=m[s1];
                }
                else{
                    ans+='?';
                }
            }
            else{
                ans+=s[i];
            }
        }
        return ans;

        
    }
};