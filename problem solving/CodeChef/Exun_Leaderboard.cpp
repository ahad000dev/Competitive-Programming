#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int r = 0;
    if (a<b)
    {
        r = b - a - 1;
    }
    else if (a>b)
    {
        r = a - b - 1;
    }
    cout<<r<<endl;
    return 0;
}