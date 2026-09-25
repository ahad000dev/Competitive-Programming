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
        cout<<"list is empty"<<endl;
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
void dubleReverse(Node* head,Node* tail)
{
   for (Node* i = head,  *j = tail; i != j && i->prev != j; i=i->next,j=j->prev)
   {
    swap(i->data,j->data);
   }
}
int main()
{
    Node* head = NULL;
    Node* tail =NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insertTail(head,tail,val);
    }
    printForward(head);
    dubleReverse(head,tail);
    printForward(head);
    return 0;
}