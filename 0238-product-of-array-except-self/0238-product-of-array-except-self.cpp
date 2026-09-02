class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre(nums.size()),suf(nums.size());
        int cp=1;
        for(int i=0;i<nums.size();i++){
            pre[i]=cp;
            cp*=nums[i];
        }
        cp=1;
        for(int i=nums.size()-1;i>=0;i--){
            suf[i]=cp;
            cp*=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=pre[i]*suf[i];
        }
        return nums;
    }
};