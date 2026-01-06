/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<pair<int,TreeNode*>>q;
        q.push({1,root});
        int ans=INT_MIN,res;
        unordered_map<int,int>m;
        while(!q.empty())
        {
            pair<int,TreeNode*>p=q.front();
            TreeNode* front=p.second;
            int level=p.first;
            m[level]+=front->val;
            q.pop();
            if(front->left!=NULL) q.push({level+1,front->left});
            if(front->right!=NULL) q.push({level+1,front->right});
        }
        for(auto i:m)
        {
            if(i.second>ans){
                ans=i.second;
                res=i.first;
            }
            else if(i.second==ans){
                res=min(res,i.first);
            }
        }
       return res;
        
    }
};