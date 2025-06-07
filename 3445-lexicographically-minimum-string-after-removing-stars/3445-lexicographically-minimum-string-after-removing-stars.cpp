class Solution {
public:
    string clearStars(string s) {
        unordered_map<int,int>m;
        // auto com=[](pair<char,int>left,pair<char,int>right){
        //     if(left.first==right.first){
        //         return left.second<right.second;
        //     }
        //     return left.first>right.first;
        // };
        priority_queue<pair<char,int>,vector<pair<char,int>>,greater<pair<char,int>>>p;
        if(s[0]=='*') {
        m[0]++;
        }
        else{
            p.push({s[0],0});
        }
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!='*')
            {
               p.push({s[i],i*-1});
            }
            else{
                m[i]++;
                pair<char,int>p1=p.top();
                m[p1.second*-1]++;
                p.pop();
            }
        }
        string ans="";
        int d=0;
        for(int i=0;i<s.size();i++)
        {
            if(m[i]>0){
                d++;
            }
            else{
                ans+=s[i];
            }
        }
       return ans;
        
    }
};