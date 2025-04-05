class Solution {
public:
    int maximumSwap(int num) {
        priority_queue<int>p;
        unordered_map<int,priority_queue<int>>m;
        int temp=num;
        string s=to_string(num);
        int l=s.size()-1;
        vector<int>v;
        while(temp>0){
            int x=temp%10;
            p.push(x);
            v.push_back(x);
            m[x].push(l);
            l--;
            temp=temp/10;
        }
        int flag=0;
        int i=0;
        // cout<<s<<"p"<<endl;
        while(flag==0)
        {
            if(s[i]-'0' !=p.top()){
                flag=1;
                // cout<<s[i]<<" "<<p.top()<<endl;
            }
            else{
                p.pop();
                i++;
            }
        }
        if(i>=s.size())
        {
            return num;
        }
        else{
        reverse(v.begin(),v.end());
        int t=p.top();
        // cout<<t<<endl;
        int idx=m[t].top();
        // cout<<idx;
        int swap=v[i];
        v[i]=t;
        v[idx]=swap;
        int num1=0;
        for(auto i:v)
        {
            num1=num1*10+i;
        }
        return num1;
        }



    }
};