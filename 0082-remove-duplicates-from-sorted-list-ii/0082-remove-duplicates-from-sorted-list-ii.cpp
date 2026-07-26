class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(0);
        ListNode* prev=dummy;
        prev->next=head;
        ListNode* cur=head;
        while(cur){
            if(cur->next && cur->val == cur->next->val){
                int val=cur->val;
                while(cur && cur->val==val){
                    cur=cur->next;
                }
                prev->next=cur;
            }
            else{
                prev=cur;
                cur=cur->next;
            }
        }
        return dummy->next;
    }
};