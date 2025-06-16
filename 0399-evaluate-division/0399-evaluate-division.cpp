class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        unordered_map<string,vector<pair<string,double>>>m;
        vector<double>ans;
        for(int i=0;i<equations.size();i++)
        {
            m[equations[i][0]].push_back({equations[i][1],values[i]});
            m[equations[i][1]].push_back({equations[i][0],(1/values[i])});
        }
        queue<pair<pair<string,string>,double>>q;
        for(int i=0;i<queries.size();i++){
            while(!q.empty()){
                q.pop();
            }
            cout<<q.size()<<" "<<queries[i][0]<<" "<<queries[i][1]<<endl;
            q.push({{queries[i][0],queries[i][1]},1});
            if(m[queries[i][0]].size()<=0 || m[queries[i][1]].size()<=0) ans.push_back(-1.00000);
            else if(queries[i][0]==queries[i][1]) ans.push_back(1.00000);
            else{
                bool flag=false;
                double total=1;
                unordered_map<string,int>val;
            while(!q.empty())
            {
                pair<pair<string,string>,double>p=q.front();
                q.pop();
                string s1=p.first.first;
                val[s1]++;
                string s2=p.first.second;
                double t=p.second;
                for(auto j:m[s1])                      
                {
                    // if(val[j.second]<=0){
                    //      total*=j.second;
                    //      cout<<j.second<<" ";
                    // }
                    // val[j.second]++;
                    // val[1/j.second]++;
                     if(j.first==s2)
                     {
                        // cout<<j.second<<" ";
                        ans.push_back(t*j.second);
                        flag=true;
                     }
                     else{
                        if(val[j.first]<=0) {
                            q.push({{j.first,s2},t*j.second});
                            val[j.first]++;
                     }
                     }
                }
                if(flag==true){
                    while(!q.empty())
                    {
                        q.pop();
                    }
                }
            }
            if(flag==false && q.empty()) {
                ans.push_back(-1.00000);
            }
            }
        }
        return ans;
        
    }
};