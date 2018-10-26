class Solution
{
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* curNode = dummyhead;
        while(curNode->next!=NULL)
        {
            if(curNode->next->val==val)
            {
                ListNode* delNode = curNode->next;
                curNode->next = delNode->next;
                delete delNode;
            }
            else
                curNode=curNode->next;
        }
        ListNode* retNode = dummyhead->next;
        delete dummyhead;
        return retNode;
    }
};

class Solution
{
public:
    ListNode* removeElements(ListNode* head, int val)
    {
        while(head != NULL&&head->val == val )
        {
            ListNode* delNode = head;
            head = delNode->next;
            delete delNode;
        }
        if(head == NULL)
            return NULL;
        ListNode* curNode = head;
        while(curNode->next!=NULL)
        {
            if(curNode->next->val==val)
            {
                ListNode* delNode = curNode->next;
                curNode->next = delNode->next;
                delete delNode;
            }
            else
                curNode=curNode->next;
        }
        return head;
    }
};