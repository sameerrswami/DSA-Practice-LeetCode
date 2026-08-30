class Solution {
public:
    bool isPalindrome(string s) {
        string ns="";
        for(char c:s){
            if(isalnum(c)) ns+=tolower(c);
        }
        int l=0,r=ns.size()-1;
        while(l<=r){
            if(ns[l++]!=ns[r--])return false;
        }
        return true;
    }
};