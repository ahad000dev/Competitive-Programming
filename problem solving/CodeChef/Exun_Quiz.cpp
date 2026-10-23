#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int count = 0;
        int ma = 0;
        for (int i = 0; i < n; i++)
        {
            if (count<m)
            {
                count += 4;
                ma ++;
            }
            else if (count>m)
            {
                count -= 1;
                ma ++;
            }
            else 
            {
                break;
            }
        }
        if (count==m)
        {
            cout<<ma<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}