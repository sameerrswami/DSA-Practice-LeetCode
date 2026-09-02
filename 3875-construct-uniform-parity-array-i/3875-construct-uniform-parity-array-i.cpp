class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool isOdd=true,isEven=true;
        for(int i:nums1){
            if(i%2==0) isOdd=false;
            if(i%2!=0) isEven=false;
        }
        if(isOdd || isEven || !isEven)return true;
        return  false;
    }
};