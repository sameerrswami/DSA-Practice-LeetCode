class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr || left == right)
            return head;
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* beforeLeft = dummy;
        for(int i = 1; i < left; i++) {
            beforeLeft = beforeLeft->next;
        }
        ListNode* start = beforeLeft->next;
        ListNode* curr = start;
        ListNode* prev = nullptr;
        for(int i = left; i <= right; i++) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        beforeLeft->next = prev;
        start->next = curr;
        return dummy->next;
    }
};