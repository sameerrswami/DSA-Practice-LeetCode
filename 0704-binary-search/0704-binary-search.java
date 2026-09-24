class Solution {
    public int search(int[] nums, int t) {
        int l=0,r=nums.length-1;
        while(l<=r){
            int md=l+(r-l)/2;
            if(nums[md]==t) return md;
            else if(nums[md]>t) r=md-1;
            else l=md+1;
        }
        return -1;
    }
}