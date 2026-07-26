class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* t1=head;
        while(t1 && t1->next){
            if(t1->val == t1->next->val){
                ListNode* temp=t1->next;
                t1->next=t1->next->next;
                delete temp;
            }
            else{
                t1=t1->next;
            }
        }
        return head;
    }
};