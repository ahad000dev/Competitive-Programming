#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }

    void pop()
    {
        v.pop_back();
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
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