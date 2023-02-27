class Solution {
public:


    ListNode* removeNthFromEnd(ListNode* head, int n) {

        int len = 0;
        ListNode* curr = head;
        while (curr!=nullptr){
            ++len;
            curr = curr->next;
        }

        ListNode* dummy = new ListNode(0, head);
        ListNode* cur = dummy;
        
        for (int i = 1; i<len-n+1; ++i){
            cur = cur->next;
        }
        cur->next = cur->next->next;
        ListNode* ans = dummy->next;
        delete dummy;

        return ans;
    }
};