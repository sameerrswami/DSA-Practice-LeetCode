class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            string t=s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        for(auto x:mp){
            v.push_back(x.second);
        }
        return v;
    }
};