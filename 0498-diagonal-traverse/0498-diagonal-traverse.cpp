class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        unordered_map<int,vector<int>>m;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                m[i+j].push_back(mat[i][j]);
            }
        }
        int n=(mat.size()-1)+(mat[0].size()+1);
        vector<int>v;
        for(int i=0;i<=n;i++)
        {
            if(i==0 || i%2!=0)
            {
               vector<int>v1=m[i];
               for(int j=0;j<v1.size();j++)
               {
                v.push_back(v1[j]);
               }
            }
            else{
                vector<int>v1=m[i];
                for(int j=v1.size()-1;j>=0;j--)
                {
                    v.push_back(v1[j]);
                }
            }
        }
        return v;
       
        
    }
};