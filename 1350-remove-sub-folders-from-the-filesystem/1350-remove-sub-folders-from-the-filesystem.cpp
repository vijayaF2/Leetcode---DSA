class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>ans;
        string s=folder[0];
        vector<string>v;
        vector<string>v1;
        string t;
        ans.push_back(folder[0]);
        for(int i=1;i<s.size();i++)
        {
            if(s[i]!='/') t+=s[i];
            else{
                v.push_back(t);
                t="";
            }
        }
        v.push_back(t);
        t="";
        for(int i=1;i<folder.size();i++)
        {
            string s1=folder[i];
            v1.clear();
            for(int j=1;j<s1.size();j++)
            {
                if(s1[j]!='/'){
                    t+=s1[j];
                }
                else{
                    v1.push_back(t);
                    t="";
                }
            }
            v1.push_back(t);
            t="";
            int j=0;
            // for(int k=0;k<v.size();k++)
            // {
            //     cout<<v[k]<<" ";
            // }
            // cout<<endl;
            while(j<v.size())
            {
                // cout<<v[j]<<" "<<v1[j];
                // cout<<endl;
                if(v[j]!=v1[j])
                {
                    ans.push_back(s1);
                    // cout<<s1<<" ";
                    v.clear();
                    v=v1;
                    break;
                }
                j++;
            }  
        }
        return ans;
    }
};