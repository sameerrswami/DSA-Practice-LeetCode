class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n,-1);
        stack<int> st;
        for(int i=2*n-1;i>=0;i--){
            int cur=i%n;
            while(!st.empty() && st.top()<=nums[cur]) st.pop();
            if(!st.empty() && i<n) v[cur]=st.top();
            st.push(nums[cur]);
        }
        return v;
    }
};