class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy=new ListNode(0);
        ListNode* t = dummy;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                t->next = list1;
                list1 = list1->next;
            }
            else {
                t->next = list2;
                list2 = list2->next;
            }
            t = t->next;
        }
        if (list1 != nullptr)
            t->next = list1;
        else
            t->next = list2;
        return dummy->next;
    }
};