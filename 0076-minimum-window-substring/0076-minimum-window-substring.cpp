class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size())
            return "";
        int ml = INT_MAX, si = -1;
        int l = 0, r = 0;
        int need = 0;
        unordered_map<char, int> m;
        for (char c : t)
            m[c]++;
        while (r < s.size()) {
            if (m[s[r]] > 0)
                need++;
            m[s[r]]--;
            while (need == t.size()) {
                if (r - l + 1 < ml) {
                    ml = r - l + 1;
                    si = l;
                }
                m[s[l]]++;
                if (m[s[l]] > 0)
                    need--;
                l++;
            }
            r++;
        }
        return (si == -1) ? "" : s.substr(si, ml);
    }
};