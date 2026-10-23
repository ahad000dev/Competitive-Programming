#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool t = false;
        for (int j = 0; j < i; j++)
        {
            if (s[i]==s[j])
            {
                t = true;
                break;
            }
        }
        if (!t)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}