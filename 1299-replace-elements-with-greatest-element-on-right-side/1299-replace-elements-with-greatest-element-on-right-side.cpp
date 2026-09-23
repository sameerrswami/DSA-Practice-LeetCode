class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        if(n==1)return {-1};
        int rge=arr[n-1];
        arr[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            int ce=arr[i];
            arr[i]=rge;
            rge=max(ce,rge);
        }
        return arr;
    }
};