class Solution {
public:
    void subsets(vector<int>&nums,vector<vector<int>> &ans,int ind,vector<int> &temp){
        ans.push_back(temp);
        for(int i = ind; i < nums.size(); i++) {
            if(i > ind && nums[i] == nums[i - 1]) continue;
            temp.push_back(nums[i]);
            subsets(nums,ans,i+1,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        subsets(nums,ans,0,temp);
        return ans;
    }
};