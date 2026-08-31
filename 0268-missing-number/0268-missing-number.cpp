class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        int total=(n*(n+1))/2;
        return total-ans;
    }
};