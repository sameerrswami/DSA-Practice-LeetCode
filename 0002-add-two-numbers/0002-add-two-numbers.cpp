class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* dummy = new ListNode(0);
        ListNode* t = dummy;;
        while(l1 && l2){
            int sum=carry+l1->val+l2->val;
            carry=sum/10;
            sum=sum%10;
            ListNode* l= new ListNode(sum);
            t->next=l;
            t=t->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            int sum=carry+l1->val;
            carry=sum/10;
            sum=sum%10;
            ListNode* l= new ListNode(sum);
            t->next=l;
            t=t->next;
            l1=l1->next;
        }
        while(l2){
            int sum=carry+l2->val;
            carry=sum/10;
            sum=sum%10;
            ListNode* l= new ListNode(sum);
            t->next=l;
            t=t->next;
            l2=l2->next;
        }
        if(carry){
            ListNode* l= new ListNode(carry);
            t->next=l;
        }
        return dummy->next;
    }
};