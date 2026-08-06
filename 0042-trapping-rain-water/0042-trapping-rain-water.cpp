class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        int l=0,r=n-1;
        int lm=h[0],rm=h[n-1];
        int res=0;
        while(l<r){
            lm=max(lm,h[l]);
            rm=max(rm,h[r]);
            if(lm<rm){
                res+=lm-h[l];
                l++;
            }else{
                res+=rm-h[r];
                r--;
            }
        }
        return  res;
    }
};