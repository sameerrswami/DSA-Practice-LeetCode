class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head || !head->next )return false;
        ListNode* s = head, *f = head->next; 
        while(f){
            if(s==f) return true;
            s=s->next;
            f=f->next->next;
        }
        return false;
    }
};