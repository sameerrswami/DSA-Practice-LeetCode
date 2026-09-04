class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount+1,-1);
        if(amount==0) return 0;
        dp[0]=0;
        for(int amt=1;amt<=amount;amt++){
            for(int c:coins){
                if(c<=amt && dp[amt-c]!=-1){
                    if(dp[amt]==-1){
                        dp[amt]=dp[amt-c]+1;
                    }
                    else{
                        dp[amt]=min(dp[amt-c]+1,dp[amt]);
                    }
                }
            }
        }
        return dp[amount];
    }
};