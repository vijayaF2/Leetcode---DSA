class Solution {
public:
    int fun(int i,int j,string& word1,string& word2,vector<vector<int>>&dp)
    {
        if(i==word1.size() || j==word2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(word1[i]==word2[j]) return 1+fun(i+1,j+1,word1,word2,dp);
        return dp[i][j]=max(fun(i+1,j,word1,word2,dp),fun(i,j+1,word1,word2,dp));
    }
    int minDistance(string word1, string word2) {
        int i=0,j=0;
        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));
        int res=fun(i,j,word1,word2,dp);
        return (word1.size()-res)+(word2.size()-res);
        
    }
};