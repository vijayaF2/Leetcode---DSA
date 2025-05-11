class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char,int>m;
        priority_queue<int,vector<int>,greater<int>>p;
        for(auto i:s)
        {
            m[i]+=1;
        }
        int s1=m.size()-k;
        for(auto j:m)
        {
           p.push(j.second);
        }
        int ans=0;
        while(s1>0)
        {
            ans+=p.top();
            p.pop();
            s1--;
        }
        return ans;

        
    }
};