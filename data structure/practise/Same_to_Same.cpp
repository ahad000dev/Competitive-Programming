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
void sameLinkList(Node* head1,Node* head2)
{
    Node* i = head1;
    Node* j = head2;
    int flag = 0;
    while (i!=NULL || j !=NULL)
    {
        if (i->data==NULL||j->data==NULL)
        {
            cout<<"NO"<<endl;
            return ;
            
        }
        if (i->data!=j->data)
        {
            flag=1;
            
        }
        i=i->next;
        j=j->next;
    }
    if (flag ==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
int main()
{
        Node* head1 = NULL;
        Node* tail1 = NULL;
        while (true)
        {
            int val;
            cin>>val;
            if (val==-1)
            {
                break;
            }
            appendLast(head1,tail1,val);
        }
        Node* head2 = NULL;
        Node* tail2 = NULL;
        while (true)
        {
            int val;
        cin>>val;
        if (val==-1)
        {
            break;
        }
        appendLast(head2,tail2,val);
    }
    sameLinkList(head1,head2);
    // Write your code here
    return 0;
}
