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
void LinkReverse(Node* &head,Node* &tail,Node* tem)
{
    if (tem->next == NULL)
    {
        head= tem;
        return ;
    }
    LinkReverse(head,tail,tem->next);
    tem->next->next= tem;
    tem->next = NULL;
    tail = tem;
}
void print(Node* head)
{
    Node* tem = head;
    while (tem != NULL)
    {
        cout<<tem->val<<"->";
        tem = tem->next;  
    }
    cout<<endl;
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
    print(head);
    LinkReverse(head,tail,head);
    print(head);
    return 0;
}