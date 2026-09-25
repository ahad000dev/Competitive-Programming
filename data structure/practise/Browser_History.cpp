#include <bits/stdc++.h>

using namespace std;
class Node{
    public:
    string data;
    Node* next;
    Node* prev;
    Node(string data)
    {
        this->data=data;
        this->next= NULL;
        this->prev = NULL;
    }
};
void searching(Node* head,Node* &cur,string val)
{
    stringstream ss(val);
    string word,str;
    ss>>word>>str;
    if (word=="visit")
    {
        Node* tem= head;
        while (tem!=NULL)
        {
            if (tem->data==str)
            {
                cur=tem;
                cout<<cur->data<<endl;
                return ;     
            }
            tem  = tem->next;
        }
        cout<<"Not Available"<<endl;
    }
    else if (word=="prev")
    {
        if (cur->prev==NULL)
        {
            cout<<"Not Available"<<endl;
        }
        else
        {
            cur = cur->prev;   
            cout<<cur->data<<endl;
        }
    }
    else if (word== "next")
    {
        if (cur->next==NULL)
        {
            cout<<"Not Available"<<endl;
        }
        else
        {
            cur = cur->next;   
            cout<<cur->data<<endl;
        }
    }

}
void insertTail(Node* &head,Node* &tail,string val)
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
    Node* head = NULL;
    Node* tail =NULL;
    string val;
    while (cin >> val && val != "end")
    {
        insertTail(head, tail, val);
    }
    int t;
    cin>>t;
    cin.ignore();
    Node* cur = head;
    for (int i = 0; i < t; i++)
    {
        string val;
        getline(cin,val);
        searching(head,cur,val);
    }
    // Write your code here
    return 0;
}
