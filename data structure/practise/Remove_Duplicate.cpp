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

void append(Node* &head,Node* &tail, int val)
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
void removeDup(Node* head,Node* tail)
{

    Node* i = head;
    while (i != NULL)
    {
        Node* tem = i;
        Node* j = i->next;
        while (j != NULL)
        {
             if (i->data==j->data)
            {
                tem->next= j->next;
                if (j==tail)
                {
                    tail= tem;
                }
                Node* del = j;
                j= j->next;
                delete del;
                
            }
            else
            {   
                tem = j;
                j= j->next;
            }
        }
        i=i->next;
    }

    print(head);
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
        append(head,tail, val);
    }
    removeDup(head,tail);
    // Write your code here
    return 0;
}
