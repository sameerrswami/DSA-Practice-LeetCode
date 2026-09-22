class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,r=1;
        while(r<nums.size()){
            if(nums[r]==nums[l])r++;
            else if(nums[r]!=nums[l]){
                nums[++l]=nums[r];
            }
        }
        return l+1;
    }
};