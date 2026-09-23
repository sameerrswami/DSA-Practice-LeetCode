class Solution {
public:
    bool isPalindrome(string s) {
        string ps="";
        for(char c:s){
            if(isalnum(c)){
                ps+=tolower(c);
            }
        }
        if(ps=="")return true;
        int i=0;
        while(i<ps.size()/2){
            if(ps[i]!=ps[ps.size()-i-1]) return false;
            i++;
        }
        return true;
    }
};