#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int className;
    char section;
    int id;
};
int main()
{
    int n;
    cin>>n;
    student a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].name >> a[i].className>>a[i].section>>a[i].id;
    }
    int i = 0;
    int j = n - 1;
    while(i<j)
    {
        char temp = a[i].section;
        a[i].section =a[j].section;
        a[j].section = temp;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].className << " " << a[i].section<< " " <<a[i].id<< endl;
    }
    return 0;
}