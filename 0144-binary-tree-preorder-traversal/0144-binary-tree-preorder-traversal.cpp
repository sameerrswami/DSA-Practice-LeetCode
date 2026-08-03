class Solution {
public:
    vector<int> v;
    void helper(TreeNode*root){
        if(!root) return;
        v.push_back(root->val);
        helper(root->left);
        helper(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        helper(root);
        return v;
    }
};