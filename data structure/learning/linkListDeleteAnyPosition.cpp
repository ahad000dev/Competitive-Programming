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
void deteteHeadPos(Node* &head,int n)
{
    Node* i = head;
    Node* j = NULL;
    for (int k = 0; k < n-1; k++)
    {
        j= i;
        i = i->next;
    }
    j->next = i->next;

    delete i;
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
    deteteHeadPos(head,3);
    print(head);
    return 0;
}