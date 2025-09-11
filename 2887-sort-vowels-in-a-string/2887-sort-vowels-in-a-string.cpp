class Solution {
public:
    string sortVowels(string s) {
        unordered_map<int,int>m;
        priority_queue<char,vector<char>,greater<char>>p;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                p.push(s[i]);
                m[i]++;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(m[i]>0)
            {
                s[i]=p.top();
                p.pop();
            }
        }
        return s;
        
    }
};