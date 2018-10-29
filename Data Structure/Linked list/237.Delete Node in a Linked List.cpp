class Solution
{
public:
    void deleteNode(ListNode* node)
    {
        if(node == NULL)
            return;
        if(node->next == NULL)
        {
            delete node;
            node = NULL;
            return;
        }
        node->val = node->next->val;
        ListNode* delNode = node->next;
        node->next = delNode->next;
        delete delNode;
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
    void deleteNode(ListNode* node)
    {
        if(node == NULL)
            return;
        if(node->next == NULL)
        {
            delete node;
            node = NULL;
            return;
        }
        node->val = node->next->val;
        ListNode* delNode = node->next;
        node->next = delNode->next;
        delete delNode;
    }
};

int main()
{
    int arr[]= {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    ListNode* head = createLinkedList(arr,n);
    printLinkedList(head);
    Solution().deleteNode(head->next->next);
    printLinkedList(head);
    deleteLinkedList(head);
    return 0;
}
*/
