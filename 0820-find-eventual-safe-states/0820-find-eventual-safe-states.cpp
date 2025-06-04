class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        unordered_map<int,vector<int>>m;
        vector<int>outdegree(graph.size(),0);
        for(int i=0;i<graph.size();i++)
        {
            for(int j=0;j<graph[i].size();j++)
            {
                m[graph[i][j]].push_back(i);
            }
            outdegree[i]=graph[i].size();
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<outdegree.size();i++)
        {
            if(outdegree[i]==0)
            {
                q.push(i);
                ans.push_back(i);
            }
        }
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(int i=0;i<m[x].size();i++)
            {
                outdegree[m[x][i]]--;
                if(outdegree[m[x][i]]==0)
                {
                    q.push(m[x][i]);
                    ans.push_back(m[x][i]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};