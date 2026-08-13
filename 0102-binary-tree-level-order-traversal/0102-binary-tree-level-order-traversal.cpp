class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)return res;
        queue<TreeNode*> q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            int s=q.size();
            res.push_back({});
            while(s--){
                TreeNode* node=q.front();
                q.pop();
                res[i].push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            i++;
        }
        return res;
    }
};