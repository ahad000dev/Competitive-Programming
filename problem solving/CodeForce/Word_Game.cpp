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
        string a[3][n];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
        }
        int b[3];
        for (int i = 0; i < 3; i++)
        {
            int x = 0;
            for (int l = 0; l < n; l++)
            {
                int y = 0;
                for (int j = 0; j < 3; j++)
                {
                    if (i==j) continue;
                    for (int k = 0; k < n; k++)
                    {
                        if (a[i][l]==a[j][k])
                        {
                            y ++;
                            break;
                        }
                    }
                }
                if (y==0)
                {
                    x +=3;
                }
                else if (y==1)
                {
                    x += 1; 
                }
            }
            b[i] = x;
        }
        for (int i = 0; i < 3; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}