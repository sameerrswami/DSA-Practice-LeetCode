class Solution {
public:
    void subsets(vector<int>&nums,vector<vector<int>> &ans,int i,int n,vector<int> &temp){
        if(i==n){
            ans.push_back(temp);
            return;
        }
        subsets(nums,ans,i+1,n,temp);
        temp.push_back(nums[i]);
        subsets(nums,ans,i+1,n,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        int i=0;
        vector<int> temp;
        subsets(nums,ans,i,n,temp);
        return ans;
    }
};