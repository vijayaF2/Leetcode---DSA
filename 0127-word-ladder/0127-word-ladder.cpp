class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<int,string>>q;
        unordered_map<string,int>m;
        unordered_map<string,int>vis;
        for(int i=0;i<wordList.size();i++){
            m[wordList[i]]++;
        }
        q.push({0,beginWord});
        vis[beginWord]++;
        while(!q.empty())
        {
            int dis=q.front().first;
            string curr=q.front().second;
            if(curr==endWord) return dis+1;
            q.pop();
           
            for(int i=0;i<curr.size();i++)
            {
                string temp=curr;
                for(int j=97;j<=122;j++){
                      temp[i]=(char)j;
                      if(m[temp]>=1 && vis[temp]<=0)
                      {
                        q.push({dis+1,temp});
                        cout<<temp<<" ";
                        vis[temp]++;
                      }
               }
               cout<<endl;
            }
        }
        return 0;
        
    }
};