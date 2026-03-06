class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'){
                flag=1;
            }
            else if(s[i]=='0' && flag==1){
                c++;
                flag=0;
            }
        }
        if(flag==1) c++;
        if(c<=1) return true;
        else{
            return false;
        }
        
    }
};