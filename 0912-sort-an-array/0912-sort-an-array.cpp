class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        // bubble sort

        // for(int i =0;i<nums.size();i++){
        //     for(int j=i;j<nums.size();j++){
        //         if(nums[j]<nums[i]){
        //             swap(nums[i],nums[j]);
        //         }
        //     }
        // }

        // selection sort

        // for (int i = 0; i < nums.size() - 1; i++) {
        //     int mn = i;
        //     for (int j = i + 1; j < nums.size(); j++) {
        //         if (nums[j] < nums[i]) {
        //             mn = j;
        //         }
        //     }
        //     swap(nums[i], nums[mn]);
        // }

        // insertion sort

        // for (int i = 1; i < n; i++) {
        //     int key = nums[i];
        //     int j = i - 1;

        //     while (j >= 0 && nums[j] > key) {
        //         nums[j + 1] = nums[j];
        //         j--;
        //     }

        //     nums[j + 1] = key;
        // }

        // merge sort

        mergeSort(nums,0,nums.size()-1);
        
        return nums;
    }
    void mergeSort(vector<int> &nums,int l,int r){
        if(l>=r)return;
        int m=l+(r-l)/2;
        mergeSort(nums,l,m);
        mergeSort(nums,m+1,r);
        merge(nums,l,m,r);
    }
    void merge(vector<int> &nums,int l,int m,int  r){
        int i=l;
        int j=m+1;
        vector<int> temp;
        while(i<=m && j<=r){
            if(nums[i]<nums[j]){
                temp.push_back(nums[i++]);
            }
            else{
                temp.push_back(nums[j++]);
            }
        }
        while(i<=m){
            temp.push_back(nums[i++]);
        }
        while(j<=r){
            temp.push_back(nums[j++]);
        }
        for(int k=l;k<=r;k++){
            nums[k]=temp[k-l];
        }
    }
};