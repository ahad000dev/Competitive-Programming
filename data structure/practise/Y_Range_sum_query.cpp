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
    int pre[n+1];
    pre[1]= a[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    int j=1;
    while (j<=q)
    {
        int x,y;
        cin>>x>>y;
        int sum = 0;
        if (x==1)
        {
            sum = pre[y];
            
        }
        else{
            sum = pre[y]-pre[x-1];
        }
        cout<<sum<<endl;
        j++;
    }

    return 0;
}