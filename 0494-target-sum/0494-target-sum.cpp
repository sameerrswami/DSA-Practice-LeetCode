class Solution {
public:
    int sum(vector<int>&nums,int t,int i,int s){
        if(i==nums.size())return s==t;
        int plus=sum(nums,t,i+1,s+nums[i]);
        int minus=sum(nums,t,i+1,s-nums[i]);
        return plus+minus;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return sum(nums,target,0,0);
    }
};