// codeforse 1722B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        char a[n];
        char b[n];
        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((a[i]=='R' && b[i]=='B')
                ||
                (b[i] == 'R' && a[i] == 'B') 
                ||
                (a[i] == 'R' && b[i] == 'G')
                ||
                (b[i] == 'R' && a[i] == 'G')
            )
            {
                ans = false;
            }
        }
        if (ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}