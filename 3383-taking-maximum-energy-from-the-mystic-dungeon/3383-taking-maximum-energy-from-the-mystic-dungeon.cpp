class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        vector<int>v(energy.size(),0);
        int maxi=INT_MIN;
        int n=energy.size()-1;
        for(int i=n;i>=0;i--)
        {
            if(i+k<=n){
                v[i]=v[i+k]+energy[i];
                maxi=max(maxi,v[i]);
            }
            else{
                v[i]=energy[i];
                maxi=max(maxi,v[i]);
            }
        }
        return maxi;
    
        
    }
};