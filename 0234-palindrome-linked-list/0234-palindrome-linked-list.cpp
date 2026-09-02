class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* f=head,*s=head;
        while(f && f->next) {
            s=s->next;
            f=f->next->next;
        }
        ListNode* prev=nullptr,*cur=s;
        while(cur){
            ListNode* next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        ListNode* t=head;
        s=prev;
        while(s){
            if(t->val != s->val)return false;
            s=s->next;
            t=t->next;
        }
        return true;
    }
};