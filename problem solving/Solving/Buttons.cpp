#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int x1 = a + b;
    int y1 = (max(a,b) * 2)-1;
    if (x1>=y1)
    {
        cout<<x1<<endl;
    }
    else
    {
        cout<<y1<<endl;
        
    }
    return 0;
}