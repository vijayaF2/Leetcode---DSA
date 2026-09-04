class Solution {
public:
int fun(int i,int j,string& s,vector<vector<int>>&dp)
{
    if(i>=j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
     if(s[i]==s[j]) return 0+fun(i+1,j-1,s,dp);
     int left=1+fun(i+1,j,s,dp);
     int right=1+fun(i,j-1,s,dp);
     return dp[i][j]=min(left,right); 
}
    int minInsertions(string s) {
        int i=0,j=s.size()-1;
        vector<vector<int>>dp(s.size(),vector<int>(s.size(),-1));
        return fun(i,j,s,dp);
        
    }
};