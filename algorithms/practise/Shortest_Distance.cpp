#include <bits/stdc++.h>
using namespace std;

long long al[505][505];
int main()
{
    int n,e;
    cin>>n>>e;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i==j)
            {
                al[i][j] = 0;
            }
            else
            {   
                al[i][j] = LLONG_MAX;
            }
        }
    }
    while (e--)
    {
        int a,b;
        long long c;
        cin>>a>>b>>c;
        al[a][b]=min(al[a][b],c);
    }
    
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (al[i][k] != LLONG_MAX && al[k][j]!=LLONG_MAX && al[i][k] + al[k][j] < al[i][j])
                {
                    al[i][j] = al[i][k] + al[k][j];
                }
            }
            
        }
    }
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int s,v;
        cin>>s>>v;
        if (al[s][v] == LLONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << al[s][v] << endl;
        }
    }
    return 0;
}