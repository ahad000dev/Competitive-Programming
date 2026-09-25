#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data)
    {
        this->data=data;
        this->next= NULL;
        this->prev = NULL;
    }
};
void printForward(Node * head)
{
    if (head==NULL)
    {
        cout<<"list is emptu"<<endl;
    } 
    else
    {
        Node* i= head;
        while (i!=NULL)
        {
            cout<<i->data<<"->";
            i = i->next;
        }
    }
    cout<<endl;
}
void deleteAnyPosition(Node* head,int val, int n)
{
    Node* j = head;
    Node* newNode = new Node(val);
for (int i = 1; i < n-1; i++)
{
    j= j->next;
}
newNode->next = j->next;
j->next->prev = newNode;
j->next= newNode;
newNode->prev = j;
return;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = new Node(50);
    head->next = a;
    a->prev = head;
    a->next= b;
    b->prev= a;
    b->next= c;
    c->prev= b;
    c->next= tail;
    tail->prev= b;
    printForward(head);
    deleteAnyPosition(head,100,3);
    printForward(head);
    return 0;
}