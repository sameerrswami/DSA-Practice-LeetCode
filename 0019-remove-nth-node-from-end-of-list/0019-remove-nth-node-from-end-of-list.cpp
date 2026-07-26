
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = head;
        int c=0;
        while(t){
            c++;
            t=t->next;
        }
        if(c==1)return nullptr;
        n=c-n;
        t=head;
        int i=1;
        while(t && t->next){
            if(i==n){
                ListNode*temp = t->next;
                if(temp->next==nullptr){
                    t->next=nullptr;
                    delete temp;
                    return head;
                }
                else{
                    t->next=temp->next;
                    delete temp;
                    return head;
                }
            }
            i++;
            t=t->next;
        }
        return head;
    }
};