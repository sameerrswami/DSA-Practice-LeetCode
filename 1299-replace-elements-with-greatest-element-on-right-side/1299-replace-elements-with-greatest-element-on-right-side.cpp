class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int rge = -1; 
        for (int i = n - 1; i >= 0; i--) {
            int ce = arr[i];
            arr[i] = rge;
            rge = max(ce, rge);
        }
        return arr;
    }
};