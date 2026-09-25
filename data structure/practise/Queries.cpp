#include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void appendHead(Node* &head,Node* &tail, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    if (head == NULL)
    {
        tail = newNode;
    }
    head = newNode;
}
void appendTail(Node* &head,Node* &tail, int val)
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
        tail = newNode;
    }
}
void deteteHeadPos(Node* &head,Node* &tail,int n)
{
    if (head==NULL)
    {
        return ;
    }
    if (n==0)
    {
        Node* tem = head;
        head= head->next;
        if (head==NULL)
        {
            tail=NULL;
        }
        delete tem;
        return ;

    }
    Node* i = head;
    Node* j = NULL;
    for (int k = 0; k < n; k++)
    {
        if (i==NULL)
        {
            return ;
        }
        j= i;
        i = i->next;
    }
    if (i==NULL)
    {
        return;
    }
    j->next = i->next;
    if (i==tail)
    {
        tail=j;
    }
    delete i;
}
void print(Node* head)
{
    Node* tem = head;
    while (tem != NULL)
    {
        cout<<tem->data<<" ";
        tem = tem->next;  
    }
    cout<<endl;
}


int main()
{
    int q;
    cin>>q;
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < q; i++)
    {
       int x,v;
       cin>>x>>v;
       if (x==0)
       {
        appendHead(head,tail, v);
       }
       else if (x==1)
       {
        appendTail(head,tail, v);
       }
       else if (x==2)
       {
        deteteHeadPos(head,tail,v);
       }
       print(head);
    }
    // Write your code here
    return 0;
}
