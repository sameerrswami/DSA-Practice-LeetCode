class Solution {
public:
    int rob(vector<int>& nums) {
        int p1=0,p2=0;
        for(int i:nums){
            int cur=max(p1,p2+i);
            p2=p1;
            p1=cur;
        }
        return p1;
    }
};