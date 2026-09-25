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
void append(Node* head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = tail->next;
    }
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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->next = tail;
    append(head,tail,100);
    append(head,tail,200);
    append(head,tail,300);
    print(head);
    cout<<"tail is "<<tail->val<<endl;
    return 0;
}