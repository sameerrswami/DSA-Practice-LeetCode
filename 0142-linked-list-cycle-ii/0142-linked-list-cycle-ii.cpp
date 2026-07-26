class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* t=head;
        // simple sa code hai... bas agar wo pahle se visited hai to wo return kardo
        unordered_map<ListNode*,bool> mp;
        while(t && t->next){
            if(mp.count(t))return t;
            mp[t]=true;
            t=t->next;
        }
        return nullptr;
    }
};