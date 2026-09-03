class Solution {
public:
    int c=0;
    void dfs(TreeNode* root,long long t){
        if(!root)return;
        if(t==root->val) c++;
        long long diff=t-root->val;
        if(root->left) dfs(root->left,diff);
        if(root->right) dfs(root->right,diff);
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(!root)return 0;
        dfs(root,targetSum);
        if(root->left){
            pathSum(root->left,targetSum);
        }
        if(root->right){
            pathSum(root->right,targetSum);
        }
        return c;
    }
};