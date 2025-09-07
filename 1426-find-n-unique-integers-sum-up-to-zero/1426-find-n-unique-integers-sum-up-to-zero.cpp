class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n%2!=0)
        {
            ans.push_back(0);
        }
        int i=1,j=-1;
        while(ans.size()!=n)
        {
            ans.push_back(i);
            ans.push_back(j);
            i++;
            j--;
        }
        return ans;
        
    }
};