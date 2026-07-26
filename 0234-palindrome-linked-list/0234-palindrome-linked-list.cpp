class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode*t = head;
        int count=0;
        while(t){
            count++;
            t=t->next;
        }
        if(count==1)return true;
        t=head;
        for(int i=0;i<count/2;i++){
            st.push(t->val);
            t=t->next;
        }
        if(count%2!=0) t=t->next;
        while(t){
            if(st.top() != t->val){
                return false;
            }
            t=t->next;
            st.pop();
        }
        return true;
    }
};