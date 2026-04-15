class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans=INT_MAX;
        for(int i=0;i<words.size();i++)
        {
            if(words[i]==target)
            {
                if(i-startIndex>0)
                {
                    ans=min(ans,abs(i-startIndex));
                    int b=startIndex + (words.size()-i);
                    ans=min(ans,b);
                }
                else{
                    ans=min(ans,abs(i-startIndex));
                    int a=(words.size()-startIndex)+(i);
                    ans=min(ans,a);
                }
            }
        }
        return (ans==INT_MAX)?-1:ans;
        
    }
};