class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    void dfs(TreeNode* root,int t){
        if(root==NULL) return;
        path.push_back(root->val);
        if(root->left ==NULL && root->right== NULL && t==root->val){
            ans.push_back(path);
        }
        int rem = t - root->val;
        pathSum(root->left,rem);
        pathSum(root->right,rem);

        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int t) {
       dfs(root,t);
       return ans;
    }
};