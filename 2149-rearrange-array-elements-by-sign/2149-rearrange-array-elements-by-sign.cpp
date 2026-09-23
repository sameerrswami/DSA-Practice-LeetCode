class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(int i:nums){
            if(i<0)neg.push_back(i);
            else pos.push_back(i);
        }
        vector<int> res;
        int j=0;
        for(int i=0;i<nums.size();i+=2){
            res.push_back(pos[j]);
            res.push_back(neg[j]);
            j++;
        }
        return res;
    }
};