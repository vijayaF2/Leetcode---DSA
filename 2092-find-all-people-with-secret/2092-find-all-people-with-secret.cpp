class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
       map<int,vector<pair<int,int>>>m;
       for(int i=0;i<meetings.size();i++)
       {
         m[meetings[i][2]].push_back({meetings[i][0],meetings[i][1]});
       }
       vector<int>visited(n,0);
       visited[0]=visited[firstPerson]=1;
       vector<int>ans;
       ans.push_back(0);
       ans.push_back(firstPerson);
       for(auto i:m)
       {
         unordered_map<int,vector<int>>m1;
         vector<pair<int,int>>v=i.second;
          for(int j=0;j<v.size();j++)
          {
            if(visited[v[j].first]==0)
            {
                if(visited[v[j].second]==1)
                {
                    visited[v[j].first]=1;
                    ans.push_back(v[j].first);
                    if(m1[v[j].first].size()>=1)
                    {
                        queue<int>q;
                        q.push(v[j].first);
                        while(!q.empty())
                        {
                            int x=q.front();
                            q.pop();
                             vector<int>v1=m1[x];
                            for(int k=0;k<v1.size();k++)
                            {
                                if(visited[v1[k]]==0)
                                {
                                    q.push(v1[k]);
                                    visited[v1[k]]=1;
                                    ans.push_back(v1[k]);
                                }
                            }
                        }
                    }
                }
                else if(visited[v[j].second]==0)
                {
                    m1[v[j].first].push_back(v[j].second);
                    m1[v[j].second].push_back(v[j].first);
                }
            }
            else if(visited[v[j].second]==0)
            {
                if(visited[v[j].first]==1)
                {
                    visited[v[j].second]=1;
                    ans.push_back(v[j].second); 
                    if(m1[v[j].second].size()>=1)
                    {
                        queue<int>q;
                        q.push(v[j].second);
                        while(!q.empty())
                        {
                            int x=q.front();
                            q.pop();
                             vector<int>v1=m1[x];
                            for(int k=0;k<v1.size();k++)
                            {
                                if(visited[v1[k]]==0)
                                {
                                    q.push(v1[k]);
                                    visited[v1[k]]=1;
                                    ans.push_back(v1[k]);
                                }
                            }
                        }
                    }
                }
                else if(visited[v[j].first]==0)
                {
                    m1[v[j].first].push_back(v[j].second);
                    m1[v[j].second].push_back(v[j].first);
                }
            }
            
          }
       }
       return ans;
    }
};