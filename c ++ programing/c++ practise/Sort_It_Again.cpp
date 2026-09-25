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
};
bool cpm(student l, student r)
{
    if (l.eng>r.eng)
    {
        return true;
    }
    else if (l.eng==r.eng)
    {
        if (l.math > r.math)
        {
            return true;
        }
        else if (l.math < r.math)
        {
            if (l.id>r.id)
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
    sort(a, a+n,cpm);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].name <<" " << a[i].classname<<" " << a[i].section<<" " << a[i].id<<" " << a[i].math<<" " << a[i].eng<<endl;
    }
    return 0;
}