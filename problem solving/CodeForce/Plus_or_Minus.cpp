// codeforse 1807A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int plus = a + b;
        if (n==plus)
        {
            cout<<"+"<<endl;
        }
        else
        {
            cout<<"-"<<endl;
        }
    }
    return 0;
}