class Solution {
public:
    int rob(vector<int>& nums){
        // int p1=0,p2=0;
        // for(int i:nums){
        //     int cur=max(p1,p2+i);
        //     p2=p1;
        //     p1=cur;
        // }
        // return p1;
    
        int n = nums.size();
        if (n == 1)
            return nums[0];

        vector<int> dp(n);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for (int i = 2; i < n; i++) {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
        }

        return dp[n - 1];
    }
};