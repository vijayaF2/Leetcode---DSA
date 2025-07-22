class Solution {
public:
int climbing(int steps,int n,vector<int>&dp)
{
    if(steps>=n) {
        return (steps==n)?1:0;
    }
    int c1=0,c2=0;
    if(dp[steps]!=-1) return dp[steps];
    if(steps+1<=n) {
       c1= climbing(steps+1,n,dp);
    }
    if(steps+2<=n) {
       c2=climbing(steps+2,n,dp);
    }
    return dp[steps]=c1+c2;
}
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        int count=climbing(0,n,dp);
        return count;  
    }
};