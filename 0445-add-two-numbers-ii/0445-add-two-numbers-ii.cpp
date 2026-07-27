
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1;
        stack<int> s2;
        stack<int> s3;
        ListNode* t1=l1;
        while(t1){
            s1.push(t1->val);
            t1=t1->next;
        }
        t1=l2;
        while(t1){
            s2.push(t1->val);
            t1=t1->next;
        }
        ListNode* dummy = new ListNode(0);
        ListNode* temp=dummy;
        int carry=0;
        while(!s1.empty() || !s2.empty() || carry){
            int a=(s1.empty())?0:s1.top();
            int b=(s2.empty())?0:s2.top();
            if(!s1.empty())s1.pop();
            if(!s2.empty())s2.pop();
            int s=a+b+carry;
            carry=s/10;
            s=s%10;
            s3.push(s);
        }
        while(!s3.empty()){
            int a=s3.top();
            s3.pop();
            ListNode* node=new ListNode(a);
            temp->next=node;
            temp=temp->next;
        }
        return dummy->next;
    }
};