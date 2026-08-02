class Solution {
public:
    void subsets(vector<int> &v,vector<vector<int>> &ans,vector<int> &temp,int i,int k){
        if(temp.size()==k){
            ans.push_back(temp);
            return;
        }
        if(i==v.size())return;
        temp.push_back(v[i]);
        subsets(v,ans,temp,i+1,k);
        temp.pop_back();
        subsets(v,ans,temp,i+1,k);
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        for(int i=1;i<=n;i++)v.push_back(i);
        vector<vector<int>> ans;
        vector<int> temp;
        subsets(v,ans,temp,0,k);
        return ans;
    }
};