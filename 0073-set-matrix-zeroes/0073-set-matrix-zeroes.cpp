class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>v(matrix);
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(v[i][j]==0)
                {
                     for(int k=0;k<matrix[i].size();k++)
                     {
                        matrix[i][k]=0;
                     }
                     for(int m=0;m<matrix.size();m++)
                     {
                        matrix[m][j]=0;
                     }
                }
            }
        }
        
        
    }
};