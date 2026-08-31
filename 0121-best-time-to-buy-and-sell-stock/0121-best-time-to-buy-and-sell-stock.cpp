class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mxp=0;
        int mnp=prices[0];
        for(int i=1;i<prices.size();i++){
            mxp=max(mxp,prices[i]-mnp);
            mnp=min(mnp,prices[i]);
        }
        return  mxp;
    }
};