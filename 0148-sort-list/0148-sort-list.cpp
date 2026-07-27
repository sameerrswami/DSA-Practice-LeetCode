class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> v;

        ListNode* t = head;

        while(t) {
            v.push_back(t->val);
            t = t->next;
        }

        sort(v.begin(), v.end());

        t = head;

        for(int x : v) {
            t->val = x;
            t = t->next;
        }

        return head;
    }
};