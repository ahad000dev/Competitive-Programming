#include <bits/stdc++.h>

using namespace std;



int main()
{

    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int m;
    cin>>m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    a.resize(n+m);
    int x;
    cin>>x;
    for (int i = n+m+1; i >= x; i--)
    {
        if (x<=i-m)
        {
            a[i]=a[i-m];
        }
        else
        {
            a[i]= b[i-x];
        }

    }
    for (int i = 0; i < n+m; i++)
    {
        cout<<a[i]<<" ";
    }
    // Write your code here

    return 0;
}
