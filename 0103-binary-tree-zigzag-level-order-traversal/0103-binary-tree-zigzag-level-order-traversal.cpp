class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root){
        if(!root)return res;
        queue<TreeNode*> q;
        q.push(root);
        int i=1;
        while(!q.empty()){
            vector<int> v;
            int s=q.size();
            while(s--){
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(i%2==0) reverse(v.begin(),v.end());
            res.push_back(v);
            i++;
        }
        return res;   
    }
};