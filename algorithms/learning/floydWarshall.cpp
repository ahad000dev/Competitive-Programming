#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;
    cin>>n>>e;
    int al[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                al[i][j] = 0;
            }
            else
            {   
                al[i][j] = INT_MAX;
            }
        }
    }
    while (e--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        al[a][b]=c;
    }
    
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (al[i][k] != INT_MAX && al[k][j]!=INT_MAX && al[i][k] + al[k][j] < al[i][j])
                {
                    al[i][j] = al[i][k] + al[k][j];
                }
            }
            
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (al[i][j]==INT_MAX)
            {
                cout<<"INF"<<" ";
            }
            else
            {
                cout<<al[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}