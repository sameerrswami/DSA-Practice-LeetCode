class Solution {
public:
    vector<string> res;
    void perms(string &s,int i){
        if(i==s.size()){
            res.push_back(s);
            return;
        }
        if(isalpha(s[i])){
            s[i]=tolower(s[i]);
            perms(s,i+1);
            s[i]=toupper(s[i]);
            perms(s,i+1);
        }
        else{
            perms(s,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        perms(s,0);
        return res;
    }
};