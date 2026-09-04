class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int c = 0;
        if(nums.size()==1) return 0;
        for(int i = 0; i < nums.size(); i++) {
            int mx = *max_element(nums.begin(), nums.begin() + i);
            int mn = *min_element(nums.begin() + i, nums.end());
            if(mx - mn <= k)
                return i;
        }
        return -1;
    }
};