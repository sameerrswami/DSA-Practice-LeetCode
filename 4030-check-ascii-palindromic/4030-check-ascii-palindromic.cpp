class Solution {
public:
    string stob(char c){
        string res="";
        int x=c;
        while(x>0){
            res=to_string(x%2)+res;
            x/=2;
        }
        while(res.size()!=8){
            res="0"+res;
        }
        return res;
    }
    bool isPalindrome(string s){
        int i=0;
        while(i<s.size()/2){
            if(s[i]!=s[s.size()-i-1]){
                return false;
            }
            i++;
        }
        return true;
    }
    bool isPalindromic(string s) {
        string res="";
        for(char c:s){
            res+=stob(c);
        }        
        return isPalindrome(res);
    }
};