#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> s = {10,20,30,40};
    int a[]={50 ,60,70};
    list<int> l1;

    list<int> l2(10,5);
    list<int> l3(s.begin(),s.end());
    list<int> l4(a,a+3);
    cout<<l1.size()<<endl;
    cout<<l2.size()<<endl;
    cout<<*l2.begin()<<endl;
    for (auto it = l3.begin();it!=l3.end();it++)
    {
        cout<<*it<<endl;
    }
    for (auto it = l4.begin();it!=l4.end();it++)
    {
        cout<<*it<<endl;
    }
    for (int val: l4)
    {
        cout<<val<<endl;
        
    }
    return 0;
}