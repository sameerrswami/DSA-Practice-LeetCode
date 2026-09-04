class Solution {
public:
    int longestMountain(vector<int>& arr) {
        if(arr.size()<3) return 0;
        int ml=0;
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int l=i,r=i;
                while(l>0 && arr[l]>arr[l-1]) l--;
                while(r<arr.size()-1 && arr[r]>arr[r+1]) r++;
                ml=max(r-l+1,ml);
            }
        }
        return ml;
    }
};