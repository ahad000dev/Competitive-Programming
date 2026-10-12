// code forse problem 621A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long sum = 0;
    long long odd = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (a[i]%2!=0&&a[i]<odd)
        {
            odd = a[i];
        }
    }
    if (sum % 2 !=0)
    {
        sum = sum - odd;
    }
    cout<<sum<<endl;
    return 0;
}