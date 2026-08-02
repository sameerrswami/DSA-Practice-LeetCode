class Solution {
public:
    void subsets(vector<int> &nums,set<vector<int>> &ans,vector<int>&temp,int ind){
        if(temp.size()>=2){
            ans.insert(temp);
        }
        for(int i=ind;i<nums.size();i++){
            if(temp.empty() || nums[i]>=temp.back()){
                temp.push_back(nums[i]);
                subsets(nums,ans,temp,i+1);
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> res;
        vector<int> temp;
        subsets(nums,ans,temp,0);
        for(auto it:ans)res.push_back(it);
        return res;
    }
};