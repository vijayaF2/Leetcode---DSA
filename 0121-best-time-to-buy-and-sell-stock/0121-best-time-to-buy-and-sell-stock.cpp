class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // if(prices.size()<=1) return 0;
        // int maxi=INT_MIN;
        // priority_queue<pair<int,int>>p;
        // for(int j=1;j<prices.size();j++)
        // {
        //     p.push({prices[j],j});
        // }
        // for(int i=0;i<prices.size();i++)
        // {
        //     pair<int,int>p1=p.top();
        //     if(p1.first>prices[i] && p1.second>i) {
        //         maxi=max(maxi,p1.first-prices[i]);
        //     }
        //     else if(p1.second<=i){
        //         p.pop();
        //     }
        // }
        // return (maxi>0)?maxi:0;

        int maxi=0;
        int mini=prices[0];
        for(int i=0;i<prices.size();i++)
        {
            int x=prices[i]-mini;
            mini=min(mini,prices[i]);
            maxi=max(maxi,x);
        }
        return maxi;
    }
};