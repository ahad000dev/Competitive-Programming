#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    getline(cin,s);
    getline(cin,t);
    int len = min(s.size(),t.size());
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[i])
        {
            count ++;
        }   
    }
    cout<<count<<endl;
    return 0;
}