#include <bits/stdc++.h>
using namespace std;
long long int tbFibo(int n)
{
    long long int tb[67];
    tb[0] = 0;
    tb[1] = 1;
    tb[2] = 1;
    tb[3] = 2;
    for (int i = 4; i <= n; i++)
    {
        tb[i] = tb[i-1]+ tb[i-2] + tb[i-3] + tb[i-4];
    }
    return tb[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<tbFibo(n)<<endl;
    return 0;
}