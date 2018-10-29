class Solution
{
public:
    ListNode* swapPairs(ListNode* head)
    {
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* p = dummyhead;
        while(p->next && p->next->next)
        {
            ListNode* node1 = p->next;
            ListNode* node2 = node1->next;
            ListNode* next = node2->next;
            node2->next = node1;
            node1->next = next;
            p->next = node2;
            p=node1;
        }
        ListNode* retNode = dummyhead->next;
        delete dummyhead;
        return retNode;
    }
};


/**
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode* createLinkedList(int arr[], int n)
{
    if(n == 0)
        return NULL;
    ListNode* head = new ListNode(arr[0]);
    ListNode* curNode = head;
    for(int i=1; i<n; i++)
    {
        curNode->next = new ListNode(arr[i]);
        curNode = curNode->next;
    }
    return head;
}

void printLinkedList(ListNode* head)
{
    ListNode* curNode = head;
    while(curNode!=NULL)
    {
        cout<<curNode->val<<" -> ";
        curNode = curNode->next;
    }
    cout<<"NULL"<<endl;
}

void deleteLinkedList(ListNode* head)
{
    ListNode* curNode = head;
    while(curNode!=NULL)
    {
        ListNode* delNode = curNode;
        curNode = curNode->next;
        delete delNode;
    }
}

class Solution
{
public:
    ListNode* swapPairs(ListNode* head)
    {
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* p = dummyhead;
        while(p->next && p->next->next)
        {
            ListNode* node1 = p->next;
            ListNode* node2 = node1->next;
            ListNode* next = node2->next;
            node2->next = node1;
            node1->next = next;
            p->next = node2;
            p=node1;
        }
        ListNode* retNode = dummyhead->next;
        delete dummyhead;
        return retNode;
    }
};
int main()
{
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    ListNode* head = createLinkedList(arr,n);
    printLinkedList(head);
    ListNode* head1 = Solution().swapPairs(head);
    printLinkedList(head1);
    deleteLinkedList(head1);
    return 0;
}
*/
