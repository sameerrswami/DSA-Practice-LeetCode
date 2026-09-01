class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c:s){
            if(!st.empty()){
                char top=st.top();
                if(top=='(' && c==')') st.pop();
                else if(top=='{' && c=='}') st.pop();
                else if(top=='[' && c==']') st.pop();
                else{
                    st.push(c);
                }
            }
            else if(st.empty() && (c==')' || c=='}' || c==']')) return false;
            else{
                st.push(c);
            }
        }
        return st.empty();
    }
};