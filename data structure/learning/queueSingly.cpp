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
class Queue{
    public:
    Node* head= NULL;
    Node* tail = NULL;
    int s = 0;
    void push(int val)
    {
        s ++;
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
    void pop()
    {
        s--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head==NULL)
        {
            tail=NULL;
        }
    }
    int peek()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return s;
    }
    bool isEmpty(){
        if(head==NULL)
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
    Queue s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.peek()<<endl;
    cout<<s.back()<<endl;
    cout<<s.size()<<endl;
    s.pop();
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.back()<<endl;
    cout<<s.size()<<endl;
    cout<<s.isEmpty()<<endl;
    s.pop();
    cout<<s.isEmpty()<<endl;


    return 0;
}