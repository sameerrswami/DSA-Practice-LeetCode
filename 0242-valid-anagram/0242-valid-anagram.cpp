class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> sf(26,0),tf(26,0);
        for(char c:s) sf[c-'a']++;
        for(char c:t) tf[c-'a']++;
        return sf==tf;
    }
};