class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* cur = head;
        while(cur != NULL)
        {
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }         
        return pre;
    }
};