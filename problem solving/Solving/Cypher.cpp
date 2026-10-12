// codeforse problem 1703C
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
                cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            char b[x];
            int val = a[i];
            for (int j = 0; j < x; j++)
            {
                cin>>b[i];
                if (b[i]=='D')
                {
                    val++;
                }
                else if (b[i]=='U')
                {
                    val--;
                }
            }
            if (val>9)
            {
                val = val%10;
            }
            if (val<0)
            {
                val = 10 + val;
            }
            cout<<val<<" ";
        }
        cout<<endl;

    }
    return 0;
}