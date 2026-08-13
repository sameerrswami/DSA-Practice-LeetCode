class Solution {
public:

    ListNode* merge(ListNode* l1, ListNode* l2) {
        if (!l1) return l2;
        if (!l2) return l1;

        if (l1->val < l2->val) {
            l1->next = merge(l1->next, l2);
            return l1;
        }
        else {
            l2->next = merge(l1, l2->next);
            return l2;
        }
    }

    ListNode* solve(vector<ListNode*>& lists, int l, int r) {
        if (l > r)
            return nullptr;

        if (l == r)
            return lists[l];

        int mid = l + (r - l) / 2;

        ListNode* left = solve(lists, l, mid);
        ListNode* right = solve(lists, mid + 1, r);

        return merge(left, right);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty())
            return nullptr;

        return solve(lists, 0, lists.size() - 1);   
    }
};