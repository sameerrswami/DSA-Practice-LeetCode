class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* t=node;
        while(t && t->next){
            t->val=t->next->val;
            if(t->next->next==nullptr){
                ListNode* temp=t->next;
                t->next=nullptr;
                delete temp;
                return;
            }
            t=t->next;
        }
    }
};