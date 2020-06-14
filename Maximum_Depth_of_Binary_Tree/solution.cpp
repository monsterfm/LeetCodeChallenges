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
    int maxDepth(TreeNode* root) {
        if(!root)
            return 0;
        
        int maxLeft=0,maxRight=0;
        
        if(root->left !=nullptr)
            maxLeft=maxDepth(root->left);
        
        if(root->right !=nullptr)
            maxRight=maxDepth(root->right);
        
        return maxLeft > maxRight ? maxLeft+1:maxRight+1;
    }
};