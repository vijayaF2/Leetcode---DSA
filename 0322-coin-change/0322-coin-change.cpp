class Solution {
public:
    int fun(int i,int sum,int total,int amount,vector<int>&coins,vector<vector<int>>&dp)
    {
        if(sum==amount){
            // cout<<sum<<" "<<total<<endl;
         return 0;
        }
        if(i<0 || sum>amount) return 1e8;
        if(dp[i][sum]!=-1){
            // cout<<dp[i][sum]<<"dp"<<endl;
             return dp[i][sum];
        }
        int left=INT_MAX;
        // cout<<i<<endl;
        if(sum+coins[i]<=amount) left=1+fun(i,sum+coins[i],total+1,amount,coins,dp);
        int right=fun(i-1,sum,total,amount,coins,dp);
        // cout<<left<<" "<<right<<endl;
        return dp[i][sum]=min(left,right);
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0) return 0;
        sort(coins.begin(),coins.end());
        int i=coins.size()-1,sum=0,total=0;
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        int res=fun(i,sum,total,amount,coins,dp);
        if(res==1e8) return -1;
        else{
            return res;
        }
        
    }
};