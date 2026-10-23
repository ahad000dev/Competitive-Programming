#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m,5));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    vector<vector<int>> v1;
    for (int i = 0; i < n; i++)
    {
        int l;
        cin>>l;
        vector<int>a;
        for (int j = 0; j < l; j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        v1.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        int len = v1[i].size();
        for (int j = 0; j < len; j++)
        {
            cout<<v1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}