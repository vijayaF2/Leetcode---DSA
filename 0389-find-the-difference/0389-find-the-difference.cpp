class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>m;
        for(auto i:s){
            m[i]++;
        }
        char ch;
        for(auto i:t)
        {
            if(m[i]>0){
                m[i]--;
                continue;
            }
            else{
                ch=i;
                break;
            }
        }
        return ch;
        
    }
};