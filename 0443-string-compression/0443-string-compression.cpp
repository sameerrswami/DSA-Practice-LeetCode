class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        res += chars[0];
        int c = 1;
        for(int i = 1; i < chars.size(); i++) {
            if(chars[i] != res.back()) {
                if(c > 1) {
                    res += to_string(c);
                }
                res += chars[i];
                c = 1;
            }
            else c++;
        }
        if(c > 1) res += to_string(c);
        int i = 0;
        for(char r : res) chars[i++] = r;
        return res.size();
    }
};