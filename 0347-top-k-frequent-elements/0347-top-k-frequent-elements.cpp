class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp; 
        priority_queue<pair<int,int>> pq;
        for(int i:nums) mp[i]++;
        for(auto x:mp) pq.push({x.second,x.first});
        vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
        
    }
};