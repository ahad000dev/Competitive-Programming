#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int adj[n][n];
    memset(adj,0,sizeof(adj));
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a][b]= 1;
        adj[b][a]=1;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}