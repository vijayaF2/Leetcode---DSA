class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans=0,i;
        for(i=0;i<s.size()-1;i++)
        {
            int curr=m[s[i]];
            int next=m[s[i+1]];
            if(curr>=next)
            {
                ans+=curr;
                // if(i+1==s.size()-1)
                // {
                //     ans+=m[s[i+1]];
                // }
            }
            else{
                ans+=next-curr;
                i++;
            }
        }
        if(i==s.size()-1)
        {
            ans+=m[s[i]];
        }
        return ans;
        
    }
};