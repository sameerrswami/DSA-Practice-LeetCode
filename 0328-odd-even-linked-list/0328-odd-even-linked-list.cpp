
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* d1=new ListNode(0);
        ListNode* d2=new ListNode(0);
        ListNode* t=head;
        ListNode* t1=d1;
        ListNode* t2=d2;
        int i=1;
        while(t){
            if(i%2!=0){
                t1->next=t;
                t1=t1->next;
            }else{
                t2->next=t;
                t2=t2->next;
            }
            t=t->next;
            i++;
        }
        t2->next=nullptr;
        t1->next=d2->next;
        return d1->next;
    }
};