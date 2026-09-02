class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256, -1);

        int l = 0;
        int maxlen = 0;

        for (int r = 0; r < s.size(); r++) {

            if (v[s[r]] >= l) {
                l = v[s[r]] + 1;
            }

            maxlen = max(maxlen, r - l + 1);

            v[s[r]] = r;
        }

        return maxlen;
    }
};