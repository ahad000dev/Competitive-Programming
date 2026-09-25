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
void append(Node* head, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* tem = head;
        while (tem->next != NULL)
        {
            tem  = tem->next;
        }
        tem->next = newNode;
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
    Node* b = new Node(30);
    head->next = a;
    a->next = b;
    append(head,100);
    append(head,200);
    append(head,300);
    print(head);
    return 0;
}