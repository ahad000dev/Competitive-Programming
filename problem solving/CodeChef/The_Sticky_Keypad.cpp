//  donot do acctual answer
#include <bits/stdc++.h>
using namespace std;

long long solve(long long n,long long m)
{
    if (n==m)
    {
        
    }
    else
    {
        
        int l = p%10;
        if (l==m)
        {
            return solve(0,m);
        }
        return solve(n/10,m);

    }
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n,m ;
        cin>>n>>m;
        long long  ans = solve(n,m);
    }
    
    return 0;
}