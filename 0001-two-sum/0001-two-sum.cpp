class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        for(int i=0;i<nums.size();i++){
            int req = target-nums[i];
            if(mp.count(req) && i!=mp[req]){
                return {i,mp[req]};
            }
        }
        return {};
    }
};