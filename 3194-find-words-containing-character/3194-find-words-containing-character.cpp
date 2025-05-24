class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>v;
        for(int i=0;i<words.size();i++)
        {
            if(count(words[i].begin(),words[i].end(),x)>0)
            {
                v.push_back(i);
            }
        }
        return v;
        
    }
};