class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(source==destination) return true;
       unordered_map<int,vector<int>>m;
       for(int i=0;i<edges.size();i++)
       {
         m[edges[i][0]].push_back(edges[i][1]);
         m[edges[i][1]].push_back(edges[i][0]);
       }
       queue<int>q;
       vector<int>visited(n+1,0);
       q.push(source);
       visited[source]=1;
       while(!q.empty())
       {
          int node=q.front();
          q.pop();
          for(auto i:m[node])
          {
            if(visited[i]==0)
            {
                q.push(i);
                visited[i]=1;
                if(i==destination)
                {
                    return true;
                }
            }
          }
       }
       return false;
        
    }
};