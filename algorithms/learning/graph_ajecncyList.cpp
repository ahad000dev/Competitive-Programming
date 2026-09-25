#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    // int a[n];
    vector<int> al[n];
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        al[a].push_back(b);
        al[b].push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<i<<"->";
        for (int j:al[i] )
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}