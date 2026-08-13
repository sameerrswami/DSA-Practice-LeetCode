class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=nums[0];
        int df=false;
        while(!df){
            if(nums[i]<0){
                df=true;
                return i;
            }
            nums[i]=nums[i]*(-1);
            i=abs(nums[i]);
        }
        return -1;
    }
};