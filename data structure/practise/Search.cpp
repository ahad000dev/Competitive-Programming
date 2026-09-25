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
void indexFind(Node* head,int n)
{
    Node* i = head;
    int count = 0;
    while (i!= NULL)
    {
        if (i->data==n)
        {
            cout<<count<<endl;
            return;
        }
        count++;
        i=i->next;
    } 
    cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
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
    int n;
    cin >>n;
    indexFind(head,n);
}
    // Write your code here
    return 0;
}
