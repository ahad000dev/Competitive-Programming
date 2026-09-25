#include <bits/stdc++.h>
using namespace std;
int val[1005],w[1005];
int dp[1005][1005];
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
        int op1 = optiKnapSack(i-1,mw - w[i]) + val[i];
        int op2 = optiKnapSack(i-1,mw);
        dp[i][mw] = max(op1,op2);
        return dp[i][mw];
    }
    else
    {
        dp[i][mw] = optiKnapSack(i-1,mw);
        return dp[i][mw];
    }
}
int main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n,mw;
        cin>>n>>mw;
        for (int i = 0; i < n; i++)
        {
            cin>>w[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>val[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= mw; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout<<optiKnapSack(n-1,mw)<<endl;
}
    return 0;
}