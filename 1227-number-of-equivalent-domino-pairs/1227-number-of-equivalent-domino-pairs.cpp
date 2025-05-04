class Solution {
public:
struct pair_hash {
    size_t operator()(const pair<int, int>& p) const {
        return hash<int>()(p.first) ^ (hash<int>()(p.second) << 1);
    }
};
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<pair<int,int>,int,pair_hash>m;
        for(int i=0;i<dominoes.size();i++)
        {
            sort(dominoes[i].begin(),dominoes[i].end());
            pair<int,int>p={dominoes[i][0],dominoes[i][1]};
            m[p]+=1;
        }
        int ans=0;
        for(auto i:m)
        {
            int c=i.second-1;
             ans+=(c*(c+1))/2;
        }
        return ans;

        
    }
};