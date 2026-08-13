class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp=0;
        int mnp=prices[0];
        for(int i=1;i<prices.size();i++){
            mnp=min(mnp,prices[i]);
            mp=max(prices[i]-mnp,mp);
        }
        return mp;
    }
};