class MinStack {
public:
    int mn=INT_MAX;
    stack<pair<int,int>> st;
    MinStack() {}
    void push(int value) {
        mn=min(mn,value);
        st.push({value,mn});
    }
    void pop() {
        if(!st.empty()){
            st.pop();
            if(!st.empty()){
                mn=st.top().second;
            }
            else{
                mn=INT_MAX;
            }
        }
    }
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */