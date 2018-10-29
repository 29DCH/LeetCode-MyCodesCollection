class Solution
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        assert(n>=0);
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* p=dummyhead;
        ListNode* q=dummyhead;
        for(int i=0; i<n+1; i++)
        {
            assert(q);
            q=q->next;
        }
        while(q!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        ListNode* delNode = p->next;
        p->next=delNode->next;
        delete delNode;
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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        assert(n>=0);
        ListNode* dummyhead = new ListNode(0);
        dummyhead->next = head;
        ListNode* p=dummyhead;
        ListNode* q=dummyhead;
        for(int i=0; i<n+1; i++)
        {
            assert(q);
            q=q->next;
        }
        while(q!=NULL)
        {
            p=p->next;
            q=q->next;
        }
        ListNode* delNode = p->next;
        p->next=delNode->next;
        delete delNode;
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
    ListNode* head1 = Solution().removeNthFromEnd(head,2);
    printLinkedList(head1);
    deleteLinkedList(head1);
    return 0;
}
*/