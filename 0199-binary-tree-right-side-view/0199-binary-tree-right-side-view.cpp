class Solution {
public:
    vector<int> res;
    vector<int> rightSideView(TreeNode* root) {
        if(!root)return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            while(s--){
                TreeNode* node=q.front();
                q.pop();
                if(node->left)q.push(node->left);
                if(node->right)q.push(node->right);
                if(s==0){
                    res.push_back(node->val);
                    break;
                }
            }

        }
        return res;
    }
};