class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)return head;
        int size=0;
        ListNode* t=head;
        while(t){
            size++;
            t=t->next;
        }
        k=k%size;
        if(k==0)return head;
        k=size-k;
        t=head;
        int i=1;
        while(t && i<k){
            t=t->next;
            i++;
        }
        ListNode* temp=t->next;
        ListNode* th=temp;
        t->next=nullptr;
        while(temp && temp->next){
            temp=temp->next;
        }
        temp->next=head;
        head=th;
        return head;
    }
};