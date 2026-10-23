#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string a[t];
    for(int i = 0 ; i<t;i++)
    {
        cin>>a[i];
    }
    sort(a,a+t);
    int i = 1;
    string c = a[0]; 
    int j = 1;
    cout<<"OK"<<endl;
    while (i<t)
    {
        if (a[i]==c)
        {
            cout<<a[i]<<j<<endl;
            j++;
        }
        else
        {
            cout<<"OK"<<endl;
            c = a[i];
            j = 1;
        }
        i++;
    }
    return 0;
}