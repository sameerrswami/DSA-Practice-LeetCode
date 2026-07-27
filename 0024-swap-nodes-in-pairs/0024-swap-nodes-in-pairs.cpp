class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)return head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* prev=dummy;
        while(prev->next && prev->next->next){
            ListNode* a = prev->next;
            ListNode* b = a->next;
            ListNode* temp=b->next;
            prev->next=b;
            a->next=temp;
            b->next=a;            
            prev=prev->next->next;
        }
        return dummy->next;
    }
};