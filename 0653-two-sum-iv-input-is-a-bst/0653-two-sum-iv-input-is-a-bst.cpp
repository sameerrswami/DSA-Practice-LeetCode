class Solution {
public:
    unordered_map<int, int> mp;

    bool findTarget(TreeNode* root, int k) {
        if(!root) return false;

        int req = k - root->val;

        if(mp.find(req) != mp.end())
            return true;

        mp[root->val] = 1;

        return findTarget(root->left, k) ||
               findTarget(root->right, k);
    }
};