class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int>p;
        for(int i=0;i<happiness.size();i++){
            p.push(happiness[i]);
        }
        long long c=0,sum=0;
        while(k>0){
            long long x=p.top()-c;
           if(x>0) sum+=x;
            
            p.pop();
            k--;
            c++;
        }
        return sum;
        
    }
};