class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
       vector<int>prefix(arr.size());
       prefix[0]=arr[0];
       for(int i=1;i<arr.size();i++)
       {
          prefix[i]=prefix[i-1]+arr[i];
       }
       if(prefix[arr.size()-1]%3!=0) return false;
       else{
        bool flag=false;
          for(int i=0;i<prefix.size();i++)
          {
            if(2*prefix[i]==prefix[arr.size()-1]-prefix[i]){
                for(int j=i+1;j<prefix.size();j++)
                {
                    if(prefix[i]==prefix[j]-prefix[i] && prefix[i]==prefix[arr.size()-1]-prefix[j]){
                        if(prefix[i]==0 && prefix[j==0] && j==arr.size()-1) flag=false;
                        else{
                        flag=true;
                        break;
                        }
                    }
                }
            }
            if(flag==true) return true;
          }
          return false;
       }
        
    }
};