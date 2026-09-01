class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> v=nums;
        vector<int> res(nums.size(),-1);
        v.insert(v.end(),nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<v.size();j++){
                if(v[j]>v[i]){
                    res[i]=v[j];
                    break;
                }
            }
        }
        return res;
    }
};