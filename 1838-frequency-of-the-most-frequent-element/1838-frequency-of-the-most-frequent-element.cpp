class Solution {
public:
    int maxFrequency(vector<int>& a, int k) {
        sort(a.begin(), a.end());
        long long s = 0;
        int l = 0, ans = 0;

        for (int r = 0; r < a.size(); r++) {
            s += a[r];
            long long c = 1LL * a[r] * (r - l + 1) - s;

            while (c > k) {
                s -= a[l++];
                c = 1LL * a[r] * (r - l + 1) - s;
            }

            ans = max(ans, r - l + 1);
        }

        return ans;
    }
};