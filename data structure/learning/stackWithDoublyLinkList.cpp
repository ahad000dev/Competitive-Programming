#include<bits/stdc++.h>
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
class Stack{
    public:
    Node* head= NULL;
    Node* tail =NULL;
    int count=0;
    void push(int val)
    {
        count++;
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
    
    void pop()
    {
        count--;
        Node* tem= tail;
        tail = tail->prev;
        delete tem;
        if (tail==NULL)
        {
            head=NULL;
            return ;
        }
        tail->next=NULL;
    
    }
    int peek()
    {
        return tail->data;
    }
    int size()
    {
        return count;
    }
    bool isEmpty()
    {
        if (tail==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    // Stack a ;
    // a.push(10);
    // a.push(20);
    // a.push(30);
    // cout<<a.peek()<<endl;
    // a.pop();
    // cout<<a.size()<<endl;
    // a.pop();
    // cout<<a.peek()<<endl;
    // a.pop();
    // cout<<a.isEmpty()<<endl;
    int n;
    cin>>n;
    Stack b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        b.push(x);
    }
Stack c;
for (int i = 0; i < n; i++)
{
    int y = b.peek();
    c.push(y);
    cout<<y<<" ";
    b.pop();
}
cout<<endl;
for (int i = 0; i < n; i++)
{
    int y = c.peek();
    b.push(y);
    c.pop();
}
    return 0;
}