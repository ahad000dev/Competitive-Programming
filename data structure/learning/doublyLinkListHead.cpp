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
void insertHead(Node* &head,Node* &tail,int val)
{
    if (head==NULL)
    {      
        Node* newNode = new Node(val);
        head = newNode;
        tail= newNode;
    }
    else
    {
        Node* newNode = new Node(val);
        head->prev = newNode;
        newNode->next= head;
        head = newNode; 
    }
}
void insertTail(Node* &head,Node* &tail,int val)
{
    if (tail==NULL)
    {
        Node* newNode = new Node(val);
        head = newNode;
        tail= newNode;
    }
    else
    {
        Node* newNode = new Node(val);
        tail->next = newNode;
        newNode->prev= tail;
        tail = newNode; 
    }
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
    insertHead(head,tail,100);
    insertTail(head,tail,200);
    printForward(head);
    printBackward(tail);
    return 0;
}