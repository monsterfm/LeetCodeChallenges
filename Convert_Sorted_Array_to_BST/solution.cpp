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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return transform(nums, 0, nums.size()-1);
    }
    TreeNode* transform(const vector<int>& nums, int l, int h)
    {
        if(l > h) return NULL;
        int m = l+(h-l)/2;
        int val = nums[m];
        TreeNode *root = new TreeNode(val);
        root->left = transform(nums, l, m-1);
        root->right = transform(nums, m+1, h);
        return root;
    }
};