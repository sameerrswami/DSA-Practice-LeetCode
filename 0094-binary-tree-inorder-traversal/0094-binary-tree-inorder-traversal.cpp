
class Solution {
public:
    vector<int> v;
    void helper(TreeNode*root){
        if(!root) return;
        helper(root->left);
        v.push_back(root->val);
        helper(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        helper(root);
       return v;
    }
};