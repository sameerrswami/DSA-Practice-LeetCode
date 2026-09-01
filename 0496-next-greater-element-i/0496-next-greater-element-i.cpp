class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            for(int j=i;j<nums2.size();j++){
                if(nums2[j]>nums2[i]){
                    mp[nums2[i]]=nums2[j];
                    break;
                }
                else{
                    mp[nums2[i]]=-1;
                }
            }
        }
        for(int &i:nums1){
            i=mp[i];
        }
        return nums1;
    }
};