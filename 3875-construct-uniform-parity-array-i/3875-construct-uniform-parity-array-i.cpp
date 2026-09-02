class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool isOdd=true;
        bool isEven=true;
        int oc=0,ec=0;
        for(int i:nums1){
            if(i%2==0){
                isOdd=false;
                ec++;
            }
            if(i%2!=0){
                isEven=false;
                oc++;
            }
        }
        if(isOdd)return true;
        if(isEven || !isEven)return true;
        return  false;
    }
};