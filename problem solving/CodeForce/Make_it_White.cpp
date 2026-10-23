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
        string s;
        cin>>s;
        int Fidx = 0;
        int Lidx = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i]=='B')
            {
                Fidx = i;
                break;
            }
        }
        for (int i = n; i > 0; i--)
        {
            if (s[i]=='B')
            {
                Lidx = i ;
                break;
            }
        }
        int count = Lidx - Fidx + 1;

        cout<<count<<endl;
    }
    return 0;
}