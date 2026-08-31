class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* dummy = new ListNode(0);
        ListNode* t1=list1;
        ListNode* t2=list2;
        ListNode* t3=dummy;
        while(t1 && t2){
            if(t1->val < t2->val){
                t3->next=t1;
                t1=t1->next;
            }
            else{
                t3->next=t2;
                t2=t2->next;
            }
            t3=t3->next;
        }
        if(t1){
            t3->next=t1;
        }
        else{
            t3->next=t2;
        }
        return dummy->next;
    }
};