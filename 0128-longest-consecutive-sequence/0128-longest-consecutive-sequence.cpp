class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int max_len=0;
        for(int num:seen){
            if(!seen.count(num-1)){
                int l=0;
                while(seen.count(num+l)){
                    l++; 
                }
                max_len=max(max_len,l);
            }
        }
        return max_len;
    }
};