class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        priority_queue<vector<pair<int,int>>>p;
        int c=0;
        int l=grid[0].size();
        vector<pair<int,int>>v;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    c++;
                }
                else if(grid[i][j]==2)
                {
                    v.push_back({i,j});
                }
            }
        }
        p.push(v);
        v.clear();
        int time=0;
        while(!p.empty() && c>0)
        {
            vector<pair<int,int>>v1=p.top();
            p.pop();
            int flag=0;
            for(int i=0;i<v1.size();i++){
                pair<int,int>p1=v1[i];
                cout<<p1.first<<" "<<p1.second<<endl;
            if(p1.first>0 && grid[p1.first-1][p1.second]==1)
            {
                c--;
                cout<<c;
                v.push_back({p1.first-1,p1.second});
                grid[p1.first-1][p1.second]=2;
                flag=1;
            }
            if(p1.second>0 && grid[p1.first][p1.second-1]==1)
            {
                c--;
                cout<<c;
                v.push_back({p1.first,p1.second-1});
                grid[p1.first][p1.second-1]=2;
                flag=1;
            }
            if(p1.first<grid.size()-1 && grid[p1.first+1][p1.second]==1)
            {
                c--;
                cout<<c<<"v";
                v.push_back({p1.first+1,p1.second});
                grid[p1.first+1][p1.second]=2;
                flag=1;
            }
            if(p1.second<l-1 && grid[p1.first][p1.second+1]==1)
            {
                c--;
                cout<<c<<"v1";
                v.push_back({p1.first,p1.second+1});
                grid[p1.first][p1.second+1]=2;
                flag=1;
            }
            }
            if(v.size()>=1){
            p.push(v);
            }
            v.clear();
            if(flag==1)
            {
                time++;
            }
            // cout<<p.size()<<" ";
            // cout<<c<<"p";
            cout<<endl;
            cout<<c<<"count"<<endl;
        }
        
        if(c>0)
        {
            return -1;
        }
        else{
            return time;
        }

        
    }
};