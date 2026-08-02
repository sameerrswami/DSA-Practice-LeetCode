class Solution {
public:
    void subsets(vector<vector<int>> &ans,vector<int> &cands,vector<int> &temp,int t,int ind){
        int s=0;
        for(int c:temp) s+=c;
        if(s==t){
            ans.push_back(temp);
            return;
        }
        if(s>t)return;
        for(int i=ind;i<cands.size();i++){
            temp.push_back(cands[i]);
            subsets(ans,cands,temp,t,i);
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