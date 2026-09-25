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
void appendAnyPosition1(Node* head,int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tem1 = head;
    Node* tem2 = NULL;
    for (int i = 0; i < pos; i++)
    {
        tem2 = tem1;
        tem1 = tem1->next;
    }
    tem2->next= newNode;
    newNode->next = tem1;
}
void appendAnyPosition2(Node* head,int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tem = head;
    for (int i = 0; i < pos-1; i++)
    {
        tem = tem->next;
    }
    newNode->next = tem->next;
    tem->next= newNode;
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
    appendAnyPosition1(head,2,100);
    appendAnyPosition2(head,3,150);

    print(head);
    return 0;
}