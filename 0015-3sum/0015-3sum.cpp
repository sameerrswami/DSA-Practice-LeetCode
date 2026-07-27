class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            int l=i+1,r=nums.size()-1;
            while(l<r){
                int cs=nums[i]+nums[l]+nums[r];
                if(cs==0){
                    s.insert({nums[i],nums[l],nums[r]});
                    cs=0;
                    l++;r--;
                }
                else if(cs>0) r--;
                else l++;
            }
        }
        for(auto  x:s){
            v.push_back(x);
        }
        return v;
    }
};