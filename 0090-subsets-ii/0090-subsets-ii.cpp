class Solution {
public:
    void subsets(vector<int>&nums,set<vector<int>> &ans,int i,int n,vector<int> &temp){
        if(i==n){
            ans.insert(temp);
            return;
        }
        subsets(nums,ans,i+1,n,temp);
        temp.push_back(nums[i]);
        subsets(nums,ans,i+1,n,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        int n=nums.size();
        int i=0;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        subsets(nums,ans,i,n,temp);
        vector<vector<int>> res(ans.begin(),ans.end());
        return res;
    }
};