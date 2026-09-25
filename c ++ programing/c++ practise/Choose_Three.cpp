#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        int s;
        cin>>n>>s;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        int flag = 0;
        for (int x = 0; x < n; x++)
        {
            for (int y = x+1; y < n; y++)
            {
                for (int z = y+1; z < n ; z++)
                {
                    if (a[x]+a[y]+a[z]==s)
                    {
                        flag = 1;
                    }
                }
            }            
        }
        if (flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
            
        }
    }


    // Write your code here

    return 0;
}
