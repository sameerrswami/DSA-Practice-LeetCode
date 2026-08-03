class Solution {
public:
    void recurse(vector<string> &ans,string &temp,string &s,int i){
        if(i==s.size()){
            ans.push_back(temp);
            return;
        }
        if(isalpha(s[i])){
            temp+=tolower(s[i]);
            recurse(ans,temp,s,i+1);
            temp.pop_back();
            temp+=toupper(s[i]);
            recurse(ans,temp,s,i+1);
            temp.pop_back();
        }
        else{
            temp+=s[i];
            recurse(ans,temp,s,i+1);
            temp.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp;
        recurse(ans,temp,s,0);
        return ans;
    }
};