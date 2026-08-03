class Solution {
public:
    void comb(vector<vector<int>> &ans,vector<int>&cands,vector<int>&temp,int target,int ind){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=ind;i<cands.size();i++){
            if(i>ind && cands[i]==cands[i-1])continue;
            temp.push_back(cands[i]);
            comb(ans,cands,temp,target-cands[i],i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        comb(ans,candidates,temp,target,0);
        return ans;
    }
};