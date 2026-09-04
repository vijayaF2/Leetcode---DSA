class Solution {
public:
     int fun(int i,int j,string& word1,string& word2,vector<vector<int>>&dp){
        if(i==-1 && j!=-1) return j+1;
        if(i!=-1 && j==-1) return i+1;
        if(i==-1 && j==-1) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
          if(word1[i]==word2[j]) return 0+fun(i-1,j-1,word1,word2,dp);
          int del=1+fun(i-1,j,word1,word2,dp);
          int ins=1+fun(i,j-1,word1,word2,dp);
          int rep=1+fun(i-1,j-1,word1,word2,dp);
          return dp[i][j]=min({del,ins,rep});
     }
    int minDistance(string word1, string word2) {
        int i=word1.size()-1,j=word2.size()-1;
        vector<vector<int>>dp(i+1,vector<int>(j+1,-1));
        return fun(i,j,word1,word2,dp);
        
    }
};