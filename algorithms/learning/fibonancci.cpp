#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n<2)
    {
        return n;
    }
    else
    {
        return fibo(n-1) + fibo(n-2);
    }
}
long long dp[1005];
int optiFibo(int n)
{
    if (n<2)
    {
        return n;
    }
    if (dp[n]!=-1)
    {
        return dp[n];
    }
    dp[n] = fibo(n-1) + fibo(n-2);
    return dp[n];
}
int tbFibo(int n)
{
    int tb[n+1];
    tb[0] = 0;
    tb[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        tb[i] = tb[i-1]+ tb[i-2];
    }
    return tb[n];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    cout<<"use normal fibonancci -> "<<fibo(n)<<endl;
    cout<<"use optimize fibonancci -> "<<optiFibo(n)<<endl;
    cout<<"use looping fibonancci -> "<<tbFibo(n)<<endl;
    return 0;
}