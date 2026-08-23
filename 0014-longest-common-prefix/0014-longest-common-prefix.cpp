class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1)return strs[0];
        string lp=strs[0];
        for(string s:strs){
            while(s.find(lp)!=0){
                lp.pop_back();
                if(lp.empty()) return "";
            }
        }
        return lp;
    }
};