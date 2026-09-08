class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,bool> mp;
        ListNode*t=head;
        while(t && t->next){
            if(mp[t]){
                return t;
            }
            mp[t]=1;
            t=t->next;
        }
        return nullptr;
    }
};