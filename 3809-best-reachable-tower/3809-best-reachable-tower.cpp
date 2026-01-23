class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int>v(2,-1);
        int quality=INT_MIN;
        for(int i=0;i<towers.size();i++)
            {
                if((abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1])) <=radius){
                    if(quality<towers[i][2]){
                        quality=towers[i][2];
                        v[0]=towers[i][0];
                        v[1]=towers[i][1];
                    }
                    else if(quality==towers[i][2])
                    {
                        cout<<towers[i][0]<<" "<<towers[i][1]<<endl;
                        if(towers[i][0]<v[0]){
                            v[0]=towers[i][0];
                            v[1]=towers[i][1];
                        }
                        else if(towers[i][0]==v[0] && towers[i][1]<v[1]){
                              v[0]=towers[i][0];
                              v[1]=towers[i][1];
                        }
                    }
                }
            }
        return v;
        
    }
};