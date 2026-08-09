class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> res(nums.size(),-1);
        for(int i=nums.size()*2-1;i>=0;i--){
            int j=i%nums.size();
            while(!st.empty() && st.top()<=nums[j]) st.pop();
            if(!st.empty()) res[j]=st.top();
            st.push(nums[j]);
        }
        return res;
    }
};