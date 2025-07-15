class Solution {
public:
    int minCost(int n, vector<vector<int>>& edges, int k) {
        unordered_map<int,vector<pair<int,int>>>m1;
        for(int i=0;i<edges.size();i++)
        {
             m1[edges[i][0]].push_back({edges[i][1],edges[i][2]});
             m1[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
        priority_queue< pair<int, pair<int, int>>,vector<pair<int, pair<int, int>>>,greater<pair<int, pair<int, int>>> > heap;
        vector<int>visited(n,0);
        unordered_map<int,vector<pair<int,int>>>m;
        heap.push({0,{0,-1}});
        int sum=0;
        while(!heap.empty())
        {
            pair<int,pair<int,int>>p=heap.top();
            heap.pop();
            if(visited[p.second.first]==0)
            {
                visited[p.second.first]=1;
               if(p.second.second!=-1) m[p.second.second].push_back({p.second.first,p.first});
                // sum+=p.first;
                for(auto i:m1[p.second.first])
                {
                    heap.push({i.second,{i.first,p.second.first}});
                }
            }
        }
        priority_queue<pair<int,pair<int,int>>>p;
         for(auto i:m)
            {
                vector<pair<int,int>>v=i.second;
               for(auto j:v)
               {
                p.push({j.second,{i.first,j.first}});
               }
            }
        if(edges.size()==0) return 0;
        if(k==1){
            pair<int,pair<int,int>>p1=p.top();
            return p1.first;
        }
        k--;
        while(k--)
            {
                p.pop();
            }
        unordered_map<int,vector<pair<int,int>>>m2;
        while(!p.empty())
            {
                pair<int,pair<int,int>>p1=p.top();
                p.pop();
                m2[p1.second.first].push_back({p1.second.second,p1.first});
                m2[p1.second.second].push_back({p1.second.first,p1.first});
            }
        queue<int>q;
        vector<int>visited1(n,0);
        int cost=INT_MIN;
        for(int i=0;i<n;i++)
            {
                if(visited1[i]!=1)
                {
                    q.push(i);
                    visited1[i]=1;
                    while(!q.empty()){
                        int x=q.front();
                        q.pop();
                        for(auto j:m2[x])
                            {
                                if(visited1[j.first]!=1){
                                q.push(j.first);
                                visited1[j.first]=1;
                                cost=max(cost,j.second);
                                }
                            }
                    }
                }
            }
        return (cost==INT_MIN)?0:cost;
    }
};