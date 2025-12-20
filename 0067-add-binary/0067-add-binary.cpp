class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1;
        int j=b.size()-1;
        char carry;
        while(i>=0 && j>=0)
        {
            if(a[i]=='1' && b[j]=='1')
            {
                if(carry=='1')
                {
                    // cout<<ans<<" "<<carry<<endl;
                    ans+='1';
                    carry='1';
                }
                else{
                    // cout<<ans<<" "<<carry<<endl;
                ans+='0';
                carry='1';
                }
            }
            else if((a[i]=='1' && b[j]=='0') || (a[i]=='0' && b[j]=='1'))
            {
                if(carry=='1'){
                    // cout<<ans<<" "<<carry<<endl;
                    ans+='0';
                    carry='1';
                }
                else{
                    // cout<<ans<<" "<<carry<<endl;
                ans+='1';
                carry='0';
                }
            }
            else if(a[i]=='0' && b[j]=='0' && carry=='1')
            {
                // cout<<ans<<" "<<carry<<endl;
                ans+='1';
                carry='0';
            }
            else if(a[i]=='0' && b[j]=='0'){
                // cout<<ans<<" "<<carry<<endl;
             ans+='0';
             carry='0';
            }
            i--;
            j--;
        }
        // cout<<i<<" "<<j;
        // ans+=" ";
        while(i>=0){
            if(carry=='1' && a[i]=='1'){
                // cout<<ans<<" "<<carry<<endl;
                 ans+='0';
                 carry='1';
            }
            else if(carry=='1' && a[i]=='0')
            {
                // cout<<ans<<" "<<carry<<endl;
                ans+='1';
                carry='0';
            }
            else if(a[i]=='0') 
            {
                // cout<<ans<<" "<<carry<<endl;
                ans+='0';
            }
            else if(a[i]=='1'){
                // cout<<ans<<" "<<carry<<endl;
                ans+='1';
                carry='0';
            }
            i--;
        }
        while(j>=0)
        {
            if(carry=='1' && b[j]=='1'){
                // cout<<ans<<" "<<carry<<endl;
                 ans+='0';
                 carry='1';
            }
            else if(carry=='1' && b[j]=='0')
            {
                // cout<<ans<<" "<<carry<<endl;
                ans+='1';
                carry='0';
            }
            else if(b[j]=='0') {
                // cout<<ans<<" "<<carry<<endl;
            ans+='0';
            carry='0';
            }
            else if(b[j]=='1'){
                cout<<ans<<" "<<carry<<endl;
                ans+='1';
                carry='0';
            }
            // cout<<j;
            j--;
        }
        if(carry=='1') ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};