class Solution {
public:
    int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
        queue<int>q;
        unordered_map<int,int>m;
        unordered_map<int,int>m1;
        vector<int>vis(status.size(),0);
        for(int i=0;i<initialBoxes.size();i++)
        {
            q.push(initialBoxes[i]);
        }
        int sum=0;
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            if((status[x]==1 || m[x]>=1) && vis[x]==0){
                sum+=candies[x];
                vis[x]=1;
                for(int j=0;j<keys[x].size();j++)
                {
                    m[keys[x][j]]++;
                    if(m1[keys[x][j]]>0 && vis[keys[x][j]]==0)
                    {
                        sum+=candies[keys[x][j]];
                        vis[keys[x][j]]=1;
                        int z=keys[x][j];
                        for(int k=0;k<keys[z].size();k++)
                        {
                            m[keys[z][k]]++;
                        }
                        for(int k1=0;k1<containedBoxes[keys[x][j]].size();k1++)
                        {
                            q.push(containedBoxes[keys[x][j]][k1]);
                        }
                    }
                }
                for(int i=0;i<containedBoxes[x].size();i++)
                 {
                       q.push(containedBoxes[x][i]);
                 }
            }
            else{
               m1[x]++;
            }

        }
        return sum;
    }
};