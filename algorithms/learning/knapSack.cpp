#include <bits/stdc++.h>
using namespace std;
int val[1005],w[1005];
int dp[1005][1005];
int knapSack(int i,int mw)
{
    if (i<0 || mw <= 0)
    {
        return 0;
    }
    if (w[i] <= mw)
    {
        int op1 = knapSack(i-1,mw - w[i]) + val[i];
        int op2 = knapSack(i-1,mw);
        return max(op1,op2);
    }
    else
    {
        return knapSack(i-1,mw);
    }
}
int optiKnapSack(int i,int mw)
{
    if (i<0 || mw <= 0)
    {
        return 0;
    }
    if (dp[i][mw] != -1)
    {
        return dp[i][mw];
    }
    if (w[i] <= mw)
    {
        int op1 = knapSack(i-1,mw - w[i]) + val[i];
        int op2 = knapSack(i-1,mw);
        dp[i][mw] = max(op1,op2);
        return dp[i][mw];
    }
    else
    {
        dp[i][mw] = knapSack(i-1,mw);
        return dp[i][mw];
    }
}
int main()
{
    int n,mw;
    cin>>n>>mw;
    for (int i = 0; i < n; i++)
    {
        cin>>val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>w[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= mw; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout<<"maximum normal value is -> "<<knapSack(n-1,mw)<<endl;
    cout<<"maximum optimize value is -> "<<optiKnapSack(n-1,mw)<<endl;
    return 0;
}