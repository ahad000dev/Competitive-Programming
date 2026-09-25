#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int roll;
    int mark;
};
bool cpm(student l, student r)
{
    if (l.mark<r.mark)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin>>n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name >> a[i].roll>>a[i].mark;
    }
    sort(a, a+n,cpm);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].mark << endl;
    }
    return 0;
}