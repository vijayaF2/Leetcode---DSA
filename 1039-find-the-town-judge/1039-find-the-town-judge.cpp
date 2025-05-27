class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,vector<int>>m;
        unordered_map<int,vector<int>>m1;
        for(int i=0;i<trust.size();i++)
        {
            m[trust[i][0]].push_back(trust[i][1]);
            m1[trust[i][1]].push_back(trust[i][0]);
        }
        int d=0;
        if(m.size()==n) return -1;
        else{
            int i=1;
            while(i<=n)
            {
                if(m[i].size()>0)
                {
                    d++;
                }
                else{
                    if(m1[i].size()==n-1){
                    return i;
                    }
                }
                i++;
            }
        }
        return -1;
    }
};