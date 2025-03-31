class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>m;
        int left=0,right=0;
        int l=INT_MIN,d;
        while(right<fruits.size())
        {
            while(m.size()<3 && right<fruits.size())
            {
                m[fruits[right]]++;
                right++;
            }
            if(m.size()>=3){
            d=right-left-1;
            }
            else{
             d=right-left;
            }
            l=max(d,l);
            while(m.size()>=3)
            {
                m[fruits[left]]--;
                if(m[fruits[left]]==0)
                {
                    m.erase(fruits[left]);
                }
                left++;
            }
        }
        return l;
    }
};