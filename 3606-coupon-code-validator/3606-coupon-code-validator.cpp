class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        map<string,vector<string>>m;
        for(int i=0;i<code.size();i++)
        {
            bool flag=true;
            if(isActive[i]==true && (businessLine[i]=="electronics" || businessLine[i]=="grocery" || businessLine[i]=="pharmacy" || businessLine[i]=="restaurant"))
            {
                for(int j=0;j<code[i].size();j++){
                    if(((int)code[i][j]>=65 && (int)code[i][j]<=90)  || ((int)code[i][j]>=97 && (int)code[i][j]<=122) || (code[i][j]-'0'>=0 && code[i][j]-'0'<=9) || code[i][j]=='_')
                    {
                        continue;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
                if(flag==true && code[i].size()>0) m[businessLine[i]].push_back(code[i]);
            }
        }
        vector<string>ans;
        for(auto i:m)
        {
            vector<string>v=i.second;
            sort(v.begin(),v.end());
            for(int j=0;j<v.size();j++)
            {
                ans.push_back(v[j]);
            }
        }
        return ans;
        
    }
};