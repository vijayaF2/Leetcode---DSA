class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans=0;
        for(int i=0;i<strs[0].size();i++)
        {
            int flag=0;
            for(int j=1;j<strs.size();j++)
            {
                if(strs[j][i] -'a'  < strs[j-1][i]-'a'){
                    flag=1;
                    ans++;
                    break;
                } 
            }
        }
        return ans;
        
    }
};