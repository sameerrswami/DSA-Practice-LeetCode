class MyQueue {
    stack<int> st;
    stack<int> st2;
public:
    MyQueue(){}
    void push(int x) {
        while(!st.empty()) {
            st2.push(st.top());
            st.pop();
        }

        st.push(x);

        while(!st2.empty()) {
            st.push(st2.top());
            st2.pop();
        }
    }
    
    int pop() {
        int x=st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        return st.empty();
    }
};
