class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)return 0;
        vector<int> dp(amount+1,-1);
        dp[0]=0;
        for(int money=1;money<=amount;money++){
            for(int coin:coins){
                if(coin<=money && dp[money-coin]!=-1){
                    if(dp[money]==-1){
                        dp[money]=dp[money-coin]+1;
                    }else{
                        dp[money]=min(dp[money],dp[money-coin]+1);
                    }
                }

            }
        }
        return dp[amount];
    }
};