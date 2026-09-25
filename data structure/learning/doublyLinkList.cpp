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
void printBackward(Node * tail)
{
    if (tail==NULL)
    {
        cout<<"list is empty"<<endl;
    } 
    else
    {
        Node* i= tail;
        while (i!=NULL)
        {
            cout<<i->data<<"<-";
            i = i->prev;
        }
    }
    cout<<endl;

}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    head->next = a;
    a->prev = head;
    a->next= tail;
    tail->prev= a;
    printForward(head);
    printBackward(tail);
    return 0;
}