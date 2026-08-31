class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0,r=1;
        while(r<nums.size())
        {
            if(nums[r]==nums[l])
            {
                r++;
                continue;
            }
            else
            {
                nums[++l]=nums[r];
            }
        }
        return l+1;
        
    }
};