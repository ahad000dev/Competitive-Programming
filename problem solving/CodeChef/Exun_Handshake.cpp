#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n , m;
        cin>>n>>m;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int count = 0;
        int hs = 0;
        for (int i = 0; i < n; i++)
        {
            hs += a[i];
            int max = (hs * (hs-1))/2;
            if (max>m)
            {
                break;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}