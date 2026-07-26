class Solution {
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        // method using unordered_set.. store address of list1 and then while
        // traversing in list2 just check if that node is present in set or not
        // if yes then return that node else return nullptr in the end...
        
        unordered_set<ListNode*> st;
        while (headA) {
            st.insert(headA);
            headA = headA->next;
        }
        while (headB) {
            if (st.count(headB))
                return headB;
            headB = headB->next;
        }
        return nullptr;


        //  this method is bit confusing 
        // we have to traverse in both and when one end connect other to it...
        // cant be understood without an example 
        //  1 2 3 4 5       7 8 9 3 4 5 
        // so where suppose 3 is that intersection 
        // p1 travels from 1 2 3 4 5 and in the same time p2 cover 7 8 9 3 4
        // if we try to travrse more in p2 it will go to 5 but p1 got nothing
        // now we add p2 in p1 and continue traversing 
        // now u can see that distance is now will be compensated from the p2 and in that time 
        // p2 already moved  one time.. so here now p2 will be at 5 and p1 will be at 7 (as we added p2)
        // now in the same distance both will reach at 3 which is the intersection 
        // and if both reach end means reach nullptr so we returned p1 which questions is demanding
       
       
        // ListNode* p1 = headA;
        // ListNode* p2 = headB;
        // while (p1 != p2) {
        //     p1 = (p1 == nullptr) ? headB : p1->next;
        //     p2 = (p2 == nullptr) ? headA : p2->next;
        // }
        // return p1;
    }
};