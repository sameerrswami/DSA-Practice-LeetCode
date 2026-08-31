class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string str="";
        for(char c:s){
            if(c==' '){
                if(!str.empty()){
                    st.push(str);
                    str="";
                }
            }
            else{
                str+=c;
            }
        }
        if(!str.empty())st.push(str);
        string res="";
        while(!st.empty()){
            if(!st.top().empty()){
                res+=st.top();
                res+=" ";
            }
            st.pop();
        }

        res.pop_back();
        return res;;
    }
};