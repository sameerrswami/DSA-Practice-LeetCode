class Solution {
public:
    int countPrimes(int n) {
        if (n < 2) return 0;
        vector<char> v(n, true);
        v[0] = v[1] = false;
        for (int i = 4; i < n; i += 2)
            v[i] = false;
        for (int i = 3; i * i < n; i += 2) {
            if (v[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    v[j] = false;
                }
            }
        }
        int count = 0;
        for (char x : v) {
            if (x)
                count++;
        }
        return count;
    }
};