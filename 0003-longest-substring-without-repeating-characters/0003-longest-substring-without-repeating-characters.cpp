class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(256,-1);
        int l=0,r=0;
        int maxlen=0;
        while(r<s.size()){
            if(v[s[r]]!=-1 && l<=v[s[r]]){
                l=v[s[r]]+1;
            }
            maxlen=max(maxlen,r-l+1);
            v[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};;