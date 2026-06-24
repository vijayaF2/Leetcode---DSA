class Solution {
public:
    int maxNumberOfBalloons(string text) {
        string search="balloon";
        unordered_map<int,int>s;
        for(int i=0;i<search.size();i++)
        {
            s[search[i]]++;
        }
        unordered_map<int,int>m;
        int ans=INT_MAX;
        for(int i=0;i<text.size();i++)
        {
            if(s[text[i]]>0){
            m[text[i]]++;
            }
        }
        for(auto i:m)
        {
            cout<<i.second<<" ";
            ans=min(ans,i.second);
        }
        ans=min(ans,m['l']/2);
        ans=min(ans,m['o']/2);
        if(m.size()==5 && ans!=INT_MAX && m['l']>1 && m['o']>1) return ans;
        else{
            return 0;
        }
        
    }
};