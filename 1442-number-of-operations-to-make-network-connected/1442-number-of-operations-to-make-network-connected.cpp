class Solution { 
public:
    vector<int>size;
    vector<int>parent;
    void construct(int n)
    {
        size.resize(n+1,1);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findparent(int child)
    {
        if(child==parent[child]) return child;
        return parent[child]=findparent(parent[child]);
    }
    void unionsize(int pu,int pv)
    {
        if(size[pu]>size[pv])
        {
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
        else{
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        construct(n);
        int re=0,c=1;
        for(int i=0;i<connections.size();i++)
        {
            int u=connections[i][0];
            int v=connections[i][1];
            int pu=findparent(u);
            int pv=findparent(v);
            if(pu==pv){
                re++;
            }
            else{
               unionsize(pu, pv);
               c++;
            }
        }
        if(n-c <= re) return n-c;
        else{
            return -1;
        }


        
    }
};