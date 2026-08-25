class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<2)return s.size();
        unordered_map<char,int> mp;
        int l=0,r=0,mx=1;
        while(r<s.size())
        {
            mp[s[r]]++;
            while(mp[s[r]]>1){
                mp[s[l++]]--;
            }
            mx=max(mx,r-l+1);
            r++;
        }
        return mx;
    }
};;