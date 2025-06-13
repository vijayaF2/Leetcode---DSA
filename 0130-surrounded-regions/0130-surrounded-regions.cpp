class Solution {
public:
    void solve(vector<vector<char>>& board) {
        queue<pair<int,int>>q;
        vector<vector<int>>v(board.size(),vector<int>(board[0].size(),0));
        vector<vector<int>>v1(board.size(),vector<int>(board[0].size(),0));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(i==0 || j==0 || i==board.size()-1 || j==board[0].size()-1)
                {
                    if(board[i][j]=='O')
                    {
                        q.push({i,j});
                        v[i][j]=1;
                        v1[i][j]=1;
                        while(!q.empty())
                        {
                            pair<int,int>p=q.front();
                            q.pop();
                            if(p.first+1 < board.size() && board[p.first+1][p.second]=='O' && v1[p.first+1][p.second]==0){
                                v[p.first+1][p.second]=1;
                                q.push({p.first+1,p.second});
                                v1[p.first+1][p.second]=1;
                            }
                            if(p.second+1 < board[0].size() && board[p.first][p.second+1]=='O' && v1[p.first][p.second+1]==0)
                            {
                                v[p.first][p.second+1]=1;
                                q.push({p.first,p.second+1});
                                v1[p.first][p.second+1]=1;
                            }
                            if(p.first-1>=0 && board[p.first-1][p.second]=='O' && v1[p.first-1][p.second]==0)
                            {
                                v[p.first-1][p.second]=1;
                                q.push({p.first-1,p.second});
                                v1[p.first-1][p.second]=1;
                            }
                            if(p.second-1 >=0 && board[p.first][p.second-1]=='O' && v1[p.first][p.second-1]==0)
                            {
                                v[p.first][p.second-1]=1;
                                q.push({p.first,p.second-1});
                                v1[p.first][p.second-1]=1;
                            }
                        }

                    }
                }
            }
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                if(board[i][j]=='O' && v[i][j]==0) board[i][j]='X';
            }
        }
       
    }
};