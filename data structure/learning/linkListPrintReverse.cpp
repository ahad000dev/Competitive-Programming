#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void append(Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = tail->next;
    }
}
void printReverse(Node* tem)
{
    if (tem == NULL)
    {
        return ;
    }
    printReverse(tem->next);
    cout<<tem->val<<"->";
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        append(head,tail,val);
    }
    printReverse(head);
    return 0;
}