class Solution {
public:
    int maxArea(vector<int>& h) {
        int res=0;
        int l=0,r=h.size()-1;
        while(l<r){
            res=max(min(h[l],h[r])*(r-l),res);
            if(h[l]>h[r]) r--;
            else if(h[l]<h[r]) l++;
            else{
                l++;
                r--;
            }
        }
        return res;
    }
};