class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        // unordered_map<int,vector<int>>m;
        vector<int>indegree(n,0);
        vector<int>ans;
        for(int i=0;i<edges.size();i++)
        {
            // m[edges[i][0]].push_back(edges[i][1]);
            indegree[edges[i][1]]++;
        }
        for(int i=0;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
        // priority_queue<pair<int,int>>p;
        // vector<int>ans;
        // int c=0;
        // queue<int>q;
        // for(int i=0;i<n;i++)
        // {
        //     vector<int>visited(n,0);
        //     q.push(i);
        //     // cout<<i<<" ";
        //     visited[i]=1;
        //     c=1;
        //     while(!q.empty())
        //     {
        //         int x=q.front();
        //         q.pop();
        //         for(auto j:m[x])
        //         {
        //             if(visited[j]==0) {
        //                 q.push(j);
        //                 // cout<<j<<" ";
        //                 visited[j]=1;
        //                 c++;
        //             }

        //         }
        //     }
        //     p.push({c,i});
        //     // cout<<endl;
        // }
        // // cout<<"vijaya"<<endl;
        // bool flag=true;
        // pair<int,int>p1=p.top();
        // ans.push_back(p1.second);
        // // cout<<p1.first<<" "<<p1.second;
        // p.pop();
        // // cout<<p.size();
        // while(flag==true && !p.empty())
        // {
        //     pair<int,int>p2=p.top();
        //     // cout<<p2.first<<" "<<p1.first;
        //     p.pop();
        //     if(p2.first==p1.first)
        //     {
        //         ans.push_back(p2.second);
        //     }
        //     else{
        //         flag=false;
        //     }
        // }
        // return ans;
        
    }
};