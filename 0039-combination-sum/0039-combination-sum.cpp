class Solution {
public:
    void subsets(vector<vector<int>> &ans,vector<int> &cands,vector<int> &temp,int t,int ind){
        if(t==0){
            ans.push_back(temp);
            return;
        }
        if(t<0)return;
        for(int i=ind;i<cands.size();i++){
            temp.push_back(cands[i]);
            subsets(ans,cands,temp,t-cands[i],i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& cands, int t) {
        vector<int> temp;
        vector<vector<int>> ans;
        subsets(ans,cands,temp,t,0);
        return ans;
    }
};