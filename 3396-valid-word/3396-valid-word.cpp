class Solution {
public:
    bool isValid(string word) {
        int v=0,c=0,ch=0,n=0;
        for(int i=0;i<word.size();i++)
        {
            if(((int)word[i]>=65 && (int)word[i]<=90) || ((int)word[i]>=97 && (int)word[i]<=122)){
                ch++;
                word[i]=tolower(word[i]);
                if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u'){
                    v++;
                }
                else{
                    c++;
                }
            }
            else if((int)word[i]>=48 && (int)word[i]<=57)
            {
                n++;
            }
            else{
                return false;
            }
        }
        if(v>=1 && c>=1 && word.size()>=3) return true;
        else{
            return false;
        }
        
    }
};