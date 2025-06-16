class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        vector<int>updated(n*n+1,-1);
        vector<int>visited(n*n+1,0);
        int c=0,k=1;
        for(int i=n-1;i>=0;i--)
        {
            if(c%2==0){
                for(int j=0;j<n;j++)
                {
                    if(board[i][j]!=-1) updated[k]=board[i][j];
                    k++;
                }
            }
            else{
                for(int j=n-1;j>=0;j--)
                {
                   if(board[i][j]!=-1) updated[k]=board[i][j];
                   k++;
                }
            }
            c++;
        }
        queue<pair<int,int>>q;
        q.push({1,0});
        int mini=INT_MAX;
        while(!q.empty())
        {
            pair<int,int>p=q.front();
            q.pop();
            for(int i=p.first+1;i<=min(p.first+6,n*n);i++)
            {
                int x=updated[i];
                if(x==-1){
                    if(visited[i]==0){
                        q.push({i,p.second+1});
                        visited[i]=1;
                    }
                    cout<<i<<" ";
                    if(i==n*n)
                    {
                        mini=min(mini,p.second+1);
                    }
                }
                else{
                    if(visited[x]==0){
                        q.push({x,p.second+1});
                        visited[x]=1;
                    }
                    cout<<x<<" ";
                    if(x==n*n)
                    {
                        mini=min(mini,p.second+1);
                    }
                    
                }
            }
        }
        return (mini==INT_MAX)?-1:mini;
        
    }
};