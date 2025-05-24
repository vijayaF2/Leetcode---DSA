class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        int i=1;
        string ans="";
        while(i<strs.size())
        {
            string s1=strs[i];
            int j=0;
            while(j<s1.size() && j<s.size() && s1[j]==s[j])
            {
                ans+=s1[j];
                j++;
            }
            if(ans.size()>0)
            {
                s=ans;
                i++;
                ans="";
            }
            else{
                return ans;
            }
        }
        return s;
        
    }
};