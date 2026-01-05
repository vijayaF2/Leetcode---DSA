class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum=0;
        int mini=INT_MAX,c=0,zc=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<0){
                     c++;
                     sum+=-1*matrix[i][j];
                     mini=min(mini,-1*matrix[i][j]);
                     if(matrix[i][j]==0) zc++;
                }
                else{
                    mini=min(mini,matrix[i][j]);
                    sum+=matrix[i][j];
                    if(matrix[i][j]==0) zc++;
                } 
            }
        }
        if(c%2==0 || zc>0) return sum;
        else{
            cout<<mini;
            return sum-(2*mini);
        }
        
    }
};