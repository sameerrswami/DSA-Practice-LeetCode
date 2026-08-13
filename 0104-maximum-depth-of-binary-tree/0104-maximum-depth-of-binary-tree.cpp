class Solution {
public:
    int res=0;
    int maxDepth(TreeNode* root) {
        if(!root) return res;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
};