class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int ts=accumulate(nums.begin(),nums.end(),0);
        int cs=0;
        for(int i=0;i<nums.size();i++){
            ts=ts-nums[i];
            if(cs==ts) return i;
            cs+=nums[i];
        }
        return -1;
    }
};