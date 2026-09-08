class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next || !head->next->next) return {-1,-1};
        ListNode*c=head->next;
        ListNode*p=head;
        int d=1;
        int mxd=0,mnd=INT_MAX;
        int fi=-1,li=-1;
        ListNode* n=nullptr;
        while(c->next){
            n=c->next;
            if((p->val<c->val &&n->val<c->val) || (p->val>c->val &&n->val>c->val)){
                if(fi==-1) fi=d;
                else mnd=min(mnd,d-li);
                li=d;
                mxd=max(mxd,d-fi);
            }
            p=c;
            c=c->next;
            d++;
        }
        if(mnd==INT_MAX || mxd==0) return {-1,-1};
        return {mnd,mxd};
    }
};