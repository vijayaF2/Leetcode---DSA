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
    bool hasPathSum(TreeNode* root, int targetSum) {
        queue<pair<int,TreeNode*>>q;
        if(root!=NULL) q.push({root->val,root});
        while(!q.empty())
        {
            pair<int,TreeNode*>p=q.front();
            if(p.first==targetSum && p.second->left==NULL && p.second->right==NULL) return true;
            q.pop();
            if(p.second->left!=NULL) q.push({p.first+p.second->left->val , p.second->left});
            if(p.second->right!=NULL) q.push({p.first+p.second->right->val , p.second->right});
        }
        return false;
        
    }
};