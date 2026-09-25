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
        tail = tail->next;
    }
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
void reverseFun(Node* &newHead,Node* &newTail,Node* temp)
{
 if (temp->next==NULL)
 {
    newHead = temp;
    return ;
 }
 else
 {
    reverseFun(newHead,newTail,temp->next);
    temp->next->next = temp;
    temp->next=NULL;
    newTail=temp;
 }
}
bool checkPelen(Node* head)
{
    Node* newHead = head;
    Node* newTail = head;
    Node* tem = head->next;
    while(tem!=NULL)
    {
        Node* newNode = new Node(tem->val);
        newTail->next= newNode;
        newTail = newTail->next;
        tem = tem->next;
    }
    reverseFun(newHead,newTail,newHead);
    Node* temp1=newHead;
    while (temp1!=NULL&&tem!=NULL)
    {
        if (temp1->val!=tem->val)
        {
            return false;   
        }
        temp1=temp1->next;
        tem= tem->next;
    }
    return true;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val == -1)
        {
            break;
        }
        append(head,tail,val);
    }

    print(head);
    bool result = checkPelen(head);
    if (result)
    {
        cout<<"its a plendrom"<<endl;
    } 
    else
    {
        cout<<"it not plendrom"<<endl;
        
    }
    return 0;
}