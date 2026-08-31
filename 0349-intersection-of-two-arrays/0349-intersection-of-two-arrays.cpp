class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        unordered_set<int> st2;
        vector<int> res;
        for(int i:nums1) st1.insert(i);
        for(int i:nums2) st2.insert(i);
        for(auto i:st1){
            if(st2.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};