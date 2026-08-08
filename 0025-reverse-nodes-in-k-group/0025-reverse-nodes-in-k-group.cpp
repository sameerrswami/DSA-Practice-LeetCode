class Solution {
public:
    // ListNode* reverse(ListNode* head) {
    //     ListNode *prev = nullptr, *cur = head;
    //     while (cur) {
    //         ListNode* front = cur->next;
    //         cur->next = prev;
    //         prev = cur;
    //         cur = front;
    //     }
    //     return prev;
    // }
    ListNode* reverseKGroup(ListNode* head , int k){
        // ListNode* temp=head;
        // int cnt=1;
        // while (cnt < k && temp != nullptr) {
        //     temp = temp->next;
        //     cnt++;
        // }
        // if (temp == nullptr) {
        //     return head;
        // }
        // ListNode* nextGroup = temp->next;
        // temp->next = nullptr;
        // ListNode* newHead = reverse(head);
        // head->next = reverseKGroup(nextGroup, k);
        // return newHead;


        ListNode* temp=head;
        int c=0;
        while(c<k){
            if(!temp)return head;
            temp=temp->next;
            c++;
        }
        ListNode* nextGroup=reverseKGroup(temp,k);
        temp=head;
        c=0;
        ListNode* prev=nextGroup;
        while(c<k){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
            c++;
        }
        return prev;
    }

    // ListNode* reverseKGroup(ListNode* head, int k) {
    //     ListNode dummy(0);
    //     dummy.next = head;
    //     ListNode* prevGroup = &dummy;
    //     while (true) {
    //         ListNode* kth = prevGroup;
    //         for (int i = 0; i < k && kth; i++)
    //             kth = kth->next;
    //         if (!kth)
    //             break;
    //         ListNode* nextGroup = kth->next;
    //         ListNode* groupHead = prevGroup->next;
    //         kth->next = nullptr;
    //         ListNode* newHead = reverse(groupHead);
    //         prevGroup->next = newHead;
    //         groupHead->next = nextGroup;
    //         prevGroup = groupHead;
    //     }
    //     return dummy.next;
    // }
};