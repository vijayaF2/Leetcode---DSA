class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1) return word;
       map<char,vector<int>>m;
       char ch=word[0];
       for(int i=0;i<word.size();i++)
       {
        m[word[i]].push_back(i);
        ch=max(ch,word[i]);
       }
       vector<int>v=m[ch];
       priority_queue<string>ans;
       int n=word.size()-numFriends+1;
       cout<<n<<" ";
       for(int i=0;i<v.size();i++)
       {
            int k=v[i]+(n-1);
            cout<<k;
            string res="";
           for(int j=v[i];j<word.size() && j<=k;j++)
           {
              res+=word[j];
           }
           ans.push(res);
           cout<<res<<" ";
       }
    
     return ans.top();

       

        
    }
};