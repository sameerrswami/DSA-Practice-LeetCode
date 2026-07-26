
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = head;
        int c=0;
        while(t){
            c++;
            t=t->next;
        }
        if (c == n) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        n=c-n;
        t=head;
        int i=1;
        while(t){
            if(i==n){
                ListNode*temp = t->next;
                    t->next=temp->next;
                    delete temp;
                    return head;
            }
            i++;
            t=t->next;
        }
        return head;
    }
};