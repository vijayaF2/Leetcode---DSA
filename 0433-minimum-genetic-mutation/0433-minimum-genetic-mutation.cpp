class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        queue<pair<int,string>>q;
        unordered_map<string,int>m;
        unordered_map<string,int>vis;
        for(int i=0;i<bank.size();i++)
        {
            m[bank[i]]++;
        }
        q.push({0,startGene});
        vis[startGene]++;
        while(!q.empty())
        {
            int dis=q.front().first;
            string curr=q.front().second;
            if(curr==endGene){
                return dis;
            }
            q.pop();
            for(int i=0;i<8;i++)
            {
                string temp=curr;
                temp[i]='A';
                if(m[temp]>=1 && vis[temp]<=0)
                {
                    q.push({dis+1,temp});
                    vis[temp]++;
                    cout<<temp<<" ";
                }
                temp[i]='C';
                if(m[temp]>=1 && vis[temp]<=0)
                {
                    q.push({dis+1,temp});
                    vis[temp]++;
                    cout<<temp<<" ";
                }
                temp[i]='G';
                if(m[temp]>=1 && vis[temp]<=0)
                {
                    q.push({dis+1,temp});
                    vis[temp]++;
                    cout<<temp<<" ";
                }
                temp[i]='T';
                if(m[temp]>=1 && vis[temp]<=0)
                {
                    q.push({dis+1,temp});
                    vis[temp]++;
                    cout<<temp<<" ";
                }
            }
        }
        return -1;
        
    }
};