class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        unordered_map<double,priority_queue<int>>m;
        double maxi=INT_MIN;
        for(int i=0;i<dimensions.size();i++)
        {
               double ans=sqrt((dimensions[i][0]*dimensions[i][0] ) + (dimensions[i][1]*dimensions[i][1]));
               maxi=max(maxi,ans);
               m[ans].push(dimensions[i][0]*dimensions[i][1]);
        }
       return m[maxi].top();
        
    }
};