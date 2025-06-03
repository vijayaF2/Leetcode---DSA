class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indegree(numCourses,0);
        unordered_map<int,vector<int>>m;
        vector<int>ans1;
        for(int i=0;i<prerequisites.size();i++)
        {
            int u=prerequisites[i][0];
            int v=prerequisites[i][1];
            indegree[u]++;
            m[v].push_back(u);
        }
        queue<int>q;
        vector<int>ans;
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0){
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
                indegree[m[x][i]]--;
                if(indegree[m[x][i]]==0)
                {
                    q.push(m[x][i]);
                    ans.push_back(m[x][i]);
                }
            }
        }
        return (ans.size()==numCourses)?ans:ans1;
        
    }
};