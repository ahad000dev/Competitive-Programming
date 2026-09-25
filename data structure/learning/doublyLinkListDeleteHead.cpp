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
void deleteHead(Node* &head,Node* &tail)
{
    Node* deleteHead= head;
    head= head->next;
    delete deleteHead;
    if (head==NULL)
    {
        tail=NULL;
        return ;
    }
    head->prev= NULL;
}
void deletetail(Node* &head,Node* &tail)
{
    Node* deleteHead= tail;
    tail= tail->prev;
    delete deleteHead;
    if (tail==NULL)
    {
        head=NULL;
        return ;
    }
    tail->next= NULL;
}
void deleteAnyPosition(Node* &head,int n)
{
    Node* j = head;
   for (int i = 1; i < n-1; i++)
   {
    j = j->next;
   }
   Node* deleteNode = j->next;
   j->next = j->next->next;
   j->next->next->prev = j;
   delete deleteNode;
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
    tail->prev= c;
    printForward(head);
    // deletetail(head,tail);
    // deleteHead(head,tail);
    // deletetail(head,tail);
    deleteAnyPosition(head,3);
    printForward(head);
    return 0;
}