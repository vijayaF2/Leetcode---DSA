class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>v;
        int diff=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i]-arr[i-1])<diff)
            {
                v.clear();
                diff=min(diff,abs(arr[i]-arr[i-1]));
                vector<int>ans;
                ans.push_back(arr[i-1]);
                ans.push_back(arr[i]);
                v.push_back(ans);
            }
            else if((arr[i]-arr[i-1])==diff){
                vector<int>ans;
                ans.push_back(arr[i-1]);
                ans.push_back(arr[i]);
                v.push_back(ans);
            }
        }
        return v;
    }
};