class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=nullptr;
        ListNode* cur=slow;
        while(cur){
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        ListNode* p2=prev;
        ListNode* p1=head;
        int res=0;
        while(p2){
            int sum=p1->val+p2->val;
            res=max(res,sum);
            p1=p1->next;
            p2=p2->next;
        }
        return res;
    }
};