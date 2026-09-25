#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=a[i];
        }
        bool flag = true;
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            if (a[i]!=b[i])
            {
                flag = false;
            }
        }
        if (flag == false)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }

    // Write your code here

    return 0;
}
