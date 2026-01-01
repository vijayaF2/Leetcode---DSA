class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>ans;
        int carry=0;
        int add=digits[digits.size()-1]+1;
        if(add<10) ans.push_back(add);
        else{
            ans.push_back(add%10);
            carry=add/10;
        }
        for(int i=digits.size()-2;i>=0;i--)
        {
            if(digits[i]+carry <10){
             ans.push_back(digits[i]+carry);
             carry=0;
            }
            else{
                ans.push_back((digits[i]+carry)%10);
                carry=(digits[i]+carry)/10;
            }
        }
        if(carry>0) ans.push_back(carry);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};