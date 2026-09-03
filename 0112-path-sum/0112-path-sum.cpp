class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(!root->left && !root->right) return root->val==targetSum;
        int rem=targetSum-root->val;
        return hasPathSum(root->left,rem) || hasPathSum(root->right,rem);
    }
};