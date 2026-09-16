class Solution {
public:
    int jump(vector<int>& nums) {
    int c = 0;
    int curend = 0;
    int longest = 0;
    for(int i = 0; i < nums.size() - 1; i++) {
        longest = max(longest, i + nums[i]);
        if(i == curend) {
            c++;
            curend = longest;
        }
    }
    return c;
    }
};