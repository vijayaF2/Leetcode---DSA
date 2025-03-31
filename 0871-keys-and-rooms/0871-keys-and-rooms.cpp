class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int>v(rooms.size(),0);
        vector<int>v1(rooms.size(),0);
        priority_queue<int>p;
        v[0]=1;
        int i=0;
        p.push(i);
        cout<<v[i]<<" ";
        while(count(v1.begin(),v1.end(),1) < rooms.size()  && !p.empty())
        {
            p.pop();  
           if(v[i]==1)
           {
            v1[i]=1;

            for(int j=0;j<rooms[i].size();j++)
            {
                if(v[rooms[i][j]]!=1){
                v[rooms[i][j]]=1;
                cout<<v[rooms[i][j]]<<"c ";
                p.push(rooms[i][j]);
                }
            } 
            if(!p.empty()){
            i=p.top(); 
            }
           }
        }
        cout<<endl;
        cout<<count(v.begin(),v.end(),1);
        if(count(v.begin(),v.end(),1)==rooms.size()) {
         
        return true;
        }
        else{
            return false;
        }
    }
};