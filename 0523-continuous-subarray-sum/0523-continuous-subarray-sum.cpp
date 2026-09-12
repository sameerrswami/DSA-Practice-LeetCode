class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0]=-1;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int rem=sum%k;
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem] >= 2) return true;
            }
            else mp[rem]=i;
        }
        return false;
    }
};

//   23 25 31 35 42
// 0 5  1  1  5 0