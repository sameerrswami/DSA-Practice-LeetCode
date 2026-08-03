
class Solution {
public:
    int mn = INT_MAX;
    TreeNode* prev=nullptr;
    void help(TreeNode* root) {
        if (!root) {
            return;
        }
        help(root->left);
        if (prev)
            mn = min(mn, root->val - prev->val);
        prev = root;
        help(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        help(root);
        return mn;
    }
};