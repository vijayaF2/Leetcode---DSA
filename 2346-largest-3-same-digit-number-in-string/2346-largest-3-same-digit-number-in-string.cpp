class Solution {
public:
    string largestGoodInteger(string num) {
        int maxi=INT_MIN;
        unordered_map<char,int>m;
        string ans;
        for(int i=0;i<3;i++)
        {
            m[num[i]]++;
        }
        if(m.size()==1){
            string s="";
               for(auto d:m)
               {
                   s+=d.first;
                   s+=d.first;
                   s+=d.first;
               }
            int s1=stoi(s);
           if(s1>maxi)
           {
            maxi=s1;
            ans=s;
           }
        }
        int j=0;
        for(int i=3;i<num.size();i++)
        {
            m[num[j]]--;
            if(m[num[j]]==0) m.erase(num[j]);
            m[num[i]]++;
            j++;
            if(m.size()==1){
                
                string s="";
               for(auto d:m)
               {
                   s+=d.first;
                   s+=d.first;
                   s+=d.first;
               }
            int s1=stoi(s);
            if(s1>maxi){
                maxi=s1;
                ans=s;
            }
            }
        }
        return ans;
        
    }
};