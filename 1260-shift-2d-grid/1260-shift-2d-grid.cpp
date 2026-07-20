class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size()*grid[0].size();
        vector<int>v(n,0);
        k=k%v.size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(k>=v.size()) k=0;
                v[k++]=grid[i][j];
            }
        }
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size(),0));
        int k1=0;
        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                ans[i][j]=v[k1++];
            }
        }
        return ans;
        
    }
};