class Solution {
public:
    ListNode* merge(ListNode* l1,ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* t1=l1, *t2=l2;
        ListNode* dummy=new ListNode(0);
        ListNode*t = dummy;
        while(t1 && t2){
            if(t1->val<t2->val){
                t->next=t1;
                t=t->next;
                t1=t1->next;
            }
            else{
                t->next=t2;
                t=t->next;
                t2=t2->next;
            }
        }
        while(t1){
            t->next=t1;
            t=t->next;
            t1=t1->next;
        }
        while(t2){
            t->next=t2;
            t=t->next;
            t2=t2->next;
        }
        return dummy->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==1)return lists[0];
        ListNode* ans = nullptr;
        for(int i=0;i<lists.size();i++){
            ans=merge(ans,lists[i]);
        }
        return ans;
    }
};