class Solution {
public:
    void combo(int index,vector<int>&candidates,int target,vector<vector<int>>&ans, vector<int>&v)
    {
        if(index>=candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        if(candidates[index]<=target){
        v.push_back(candidates[index]);
        combo(index,candidates,target-candidates[index],ans,v);
        v.pop_back();
        }
        combo(index+1,candidates,target,ans,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        combo(0,candidates,target,ans,v);
        return ans;
    }
};