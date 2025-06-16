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
    int countNodes(TreeNode* root) {
       int c=0;
       queue<TreeNode*>q;
       if(root==NULL) return 0;
       else{
        q.push(root);
       }
       while(!q.empty())
       {
           TreeNode* x=q.front();
           c++;
           q.pop();
           if(x->left!=NULL) q.push(x->left);
           if(x->right!=NULL) q.push(x->right);
       }
       return c;
        
    }
};