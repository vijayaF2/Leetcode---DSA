class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
      vector<int>v;
      for(int i=0;i<bank.size();i++)
      {
        int c=count(bank[i].begin(),bank[i].end(),'1');
        if(c!=0)  v.push_back(c);
      }
      if(v.size()==0) return 0;
      int sum=0;
      for(int i=0;i<v.size()-1;i++)
      {
        sum+=v[i]*v[i+1];
      }
      return sum;

        
    }
};