#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<int> a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    int j=1;
    while (j<=q)
    {
        int x,y;
        cin>>x>>y;
        int sum = 0;
        for (int i = x; i <= y; i++)
        {
            sum += a[i];
        }
        cout<<sum<<endl;
        j++;
    }

    return 0;
}