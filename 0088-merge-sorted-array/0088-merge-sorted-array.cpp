class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int a=n-1,b=m-1;
        for(int i=m+n-1;i>=0;i--){
            if(a==-1) nums1[i]=nums2[b--];
            else if(b==-1) nums1[i]=nums1[a--];
            else if(nums1[a]>nums2[b]) nums1[i]=nums1[a--];
            else nums1[i]=nums2[b--];
        }
    }
};