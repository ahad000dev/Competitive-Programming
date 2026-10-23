#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int a[n+1];
        for (int j = 1; j < n+1; j++)
        {
            cin>>a[j];
        }
       int count = 0;
       int j = n + 1;
       int k = 1;
       int l = 1;
       while (j>=l)
       {
           while (k<j)
           {
                if (a[k]==a[j])
                {
                    count++;
                    l = k;
                    if (a[k]!=a[k+1])
                    {
                        break;
                    }
                }
                k++;
           }
           j--;
       }
        cout<<count<<endl;

    }
    return 0;
}