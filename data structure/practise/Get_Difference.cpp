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
void appendLast(Node* &head,Node* &tail,int val)
{
    Node* data = new Node(val);
    if (head==NULL)
    {
        head = data;
        tail = data;
        return;
    }
    else{
        tail->next = data;
        tail = tail->next;
    }
}
void maxMinDiff(Node* head)
{
    if (head == NULL)
    {
        cout<<0<<endl;
        return;
    }
    else if (head->next==NULL)
    {
        cout<<0<<endl;
        return;
    }
    else{
        Node* i = head;
        int maximum=i->data;
        int minimum=i->data;
        while (i!=NULL)
        {
            maximum = max(maximum,i->data);
            minimum = min(minimum,i->data);
            i = i->next;
        }
        cout<<maximum-minimum<<endl;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while (true)
    {
        int val;
        cin>>val;
        if (val==-1)
        {
            break;
        }
        appendLast(head,tail,val);
    }
    maxMinDiff(head);
    // Write your code here
    return 0;
}
