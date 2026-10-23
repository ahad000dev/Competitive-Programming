//  donot do acctual answer

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;

        long long i = 0;
        long long count = 0;
        long long ma = 1;

        while (i<=n)
        {
            if (ma >= n)
            {
                break;
            }
            count++;
            i++;
            ma += i;
        }
        cout<<count<<endl;
    }
    return 0;
}