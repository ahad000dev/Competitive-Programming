#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    vector<string> s(t);
    for (int i = 0; i<t; i++)
    {
        getline(cin,s[i]);
    }
    int count = 0;
    if (t>0 && !s[0].empty())
    {
        count++;
    }
    for (int i = 1; i<t; i++)
    {
        bool c = false;
        for (int j = i - 1; j >= 0; j--)
        {
            if (s[i]==s[j])
            {
                c = true;
                break;
            }
        }
        if (!c)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}