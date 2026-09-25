#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int classname;
    char section;
    int id;
    int math;
    int eng;
    int total;
};
bool cpm(student l, student r)
{
    if (l.total>r.total)
    {
        return true;
    }
    else if (l.total==r.total)
    {
        if (l.id < r.id)
        {
            return true;
        }
        else
        {
            return false;
        }
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
        cin>>a[i].name >> a[i].classname>>a[i].section>>a[i].id>>a[i].math>>a[i].eng;
    }
    for (int i = 0; i < n; i++)
    {
        a[i].total = a[i].math+a[i].eng;
    }
    sort(a, a+n,cpm);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name <<" " << a[i].classname<<" " << a[i].section<<" " << a[i].id<<" " << a[i].math<<" " << a[i].eng<<endl;
    }
    return 0;
}