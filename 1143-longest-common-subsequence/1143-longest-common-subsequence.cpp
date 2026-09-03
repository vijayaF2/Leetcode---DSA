class Solution {
public:
   int fun(int i,int j,string &text1,string &text2,vector<vector<int>>&dp)
   {
    if(i==text1.size() || j==text2.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(text1[i]==text2[j]) return 1+fun(i+1,j+1,text1,text2,dp);
    return dp[i][j]=max(fun(i,j+1,text1,text2,dp),fun(i+1,j,text1,text2,dp));
   }
    int longestCommonSubsequence(string text1, string text2) {
        int i=0,j=0;
        vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));
        return fun(i,j,text1,text2,dp);
        
    }
};