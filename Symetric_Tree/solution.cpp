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
    bool isSymmetric(TreeNode* root) {
        if(!root)
            return true;
        
        return checkChilds(root->left, root->right);
    }
    
    bool checkChilds(TreeNode* left, TreeNode* right)
    {
        if(!left && !right)
            return true;
        else if(!left || !right)
            return false;
        else if(left->val!=right->val)
            return false;
        
        return checkChilds(left->left, right->right) && checkChilds(left->right, right->left);
    }
};