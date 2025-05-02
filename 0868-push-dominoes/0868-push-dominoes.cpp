class Solution {
public:
    string pushDominoes(string dominoes) {
        string ans="";
        int i=0;
        if(dominoes.size()==1) return dominoes;
        else if(dominoes.size()>1)
        {
            int c=count(dominoes.begin(),dominoes.end(),'.');
            {
                if(c==dominoes.size()) return dominoes;
            }
        }
        while(i<dominoes.size())
        {
            if(dominoes[i]=='L') ans+='L';
            else if(dominoes[i]=='R') ans+='R';
            else{
                if(i==0 && dominoes[i]=='.')
                {
                    if(dominoes[i+1]=='L') ans+='L';
                    else if(dominoes[i+1]=='R') ans+='.';
                    else{
                        int j=i;
                        while(i<dominoes.size() && dominoes[i]=='.')
                        {
                            i++;
                        }
                        if(dominoes[i-1]=='.' && i>=dominoes.size())
                        {
                            if(dominoes[j-1]=='R')
                            {
                                while(j<dominoes.size())
                                {
                                    ans+='R';
                                    j++;
                                }
                            }
                            else if(dominoes[j-1]=='L')
                            {
                                while(j<dominoes.size())
                                {
                                    ans+='.';
                                    j++;
                                }
                            }
                        }
                        else if(dominoes[i]=='L')
                        {
                            while(j<i)
                            {
                                ans+='L';
                                j++;
                            }
                        }
                        else if(dominoes[i]=='R'){
                              while(j<i)
                              {
                                ans+='.';
                                j++;
                              }
                        }
                        i--;
                    }
                }
                else if(i>0 && dominoes[i]=='.')
                {
                    int j=i;
                    if(dominoes[i-1]=='L')
                    {
                        while(i<dominoes.size() && dominoes[i]=='.')
                        {
                            i++;
                        }
                        if(dominoes[i-1]=='.' && i>=dominoes.size())
                        {
                            if(dominoes[j-1]=='R')
                            {
                                while(j<dominoes.size())
                                {
                                    ans+='R';
                                    j++;
                                }
                            }
                            else if(dominoes[j-1]=='L')
                            {
                                while(j<dominoes.size())
                                {
                                    ans+='.';
                                    j++;
                                }
                            }
                        }
                        else if(dominoes[i]=='R')
                        {
                            while(j<i)
                            {
                                ans+='.';
                                j++;
                            }
                        }
                        else if(dominoes[i]=='L')
                        {
                            while(j<i){
                            ans+='L';
                            j++;
                            }
                        }
                        i--;
                    }
                    else if(dominoes[i-1]=='R')
                    {
                        while(i<dominoes.size() && dominoes[i]=='.')
                        {
                            i++;
                        }
                        if(dominoes[i-1]=='.' && i>=dominoes.size())
                        {
                            if(dominoes[j-1]=='R')
                            {
                                while(j<dominoes.size())
                                {
                                    ans+='R';
                                    j++;
                                }
                            }
                            else if(dominoes[j-1]=='L')
                            {
                                while(j<dominoes.size())
                                {
                                    ans+='.';
                                    j++;
                                }
                            }
                        }
                        else if(dominoes[i]=='R')
                        {
                            while(j<i)
                            {
                                ans+='R';
                                j++;
                            }
                        }
                        else if(dominoes[i]=='L')
                        {
                            int d=i-j;
                            int h=d/2;
                            int h1=h;
                            if(d%2==0)
                            {
                               while(h>0)
                               {
                                ans+='R';
                                h--;
                               }
                               while(h1>0)
                               {
                                ans+='L';
                                h1--;
                               }
                            }
                            else {
                                while(h>0)
                                {
                                    ans+='R';
                                    h--;
                                }
                                ans+='.';
                                while(h1>0)
                                {
                                    ans+='L';
                                    h1--;
                                }
                            }
                        }
                        i--;
                    }
                }
            
            }
            i++;
        }
        return ans;
    }
};