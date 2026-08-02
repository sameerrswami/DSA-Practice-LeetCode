class Solution {
public:
    void subsets(int n,int k,vector<vector<int>> &ans,vector<int> &temp,int i){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        for(int ind=i;ind<=n;ind++){
            temp.push_back(ind);
            subsets(n,k,ans,temp,ind+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        subsets(n,k,ans,temp,1);
        return ans;
    }
};