class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* d1 = new ListNode(0);
        ListNode* d2 = new ListNode(0);
        ListNode* s = d1;
        ListNode* l = d2;
        while(head) {
            if(head->val < x) {
                s->next = head;
                s = s->next;
            }
            else {
                l->next = head;
                l = l->next;
            }
            head = head->next;
        }
        l->next = nullptr;
        s->next = d2->next;
        return d1->next;
    }
};