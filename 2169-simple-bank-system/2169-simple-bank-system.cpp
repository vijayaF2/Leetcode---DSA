class Bank {
public:
vector<long long>balance1;
    Bank(vector<long long>& balance) {
        balance1=balance;
        cout<<balance1.size()<<" ";
    }
    
    bool transfer(int account1, int account2, long long money) {
        if(account1>=1 && account1<=balance1.size() && balance1[account1-1]>=money)
        {
            if(account2>=1 && account2<=balance1.size()){
                balance1[account1-1]-=money;
                balance1[account2-1]+=money;
             return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
    
    bool deposit(int account, long long money) {
        if(account>=1 && account<=balance1.size()){
            balance1[account-1]+=money;
         return true;
        }
        else{
            return false;
        }
    }
    
    bool withdraw(int account, long long money) {
        if(account>=1 && account<=balance1.size() && balance1[account-1]>=money){
         balance1[account-1]-=money;
         return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */