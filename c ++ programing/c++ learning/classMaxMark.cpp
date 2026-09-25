#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int mark;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name >> a[i].roll>>a[i].mark;
    }
    int mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mn = min(a[i].mark, mn);
    }
    cout<<mn;
    return 0;
}