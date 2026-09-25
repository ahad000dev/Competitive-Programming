#include <bits/stdc++.h>

using namespace std;
bool dp[100005];
void checkBFS()
{
    dp[1]=true;
    for (int i = 0; i < 100000; i++)
    {
        if (dp[i]==true)
        {
            if (i+3<=100000)
            {
                dp[i+3]=true;
            }
            if (i*2<=100000)
            {
                dp[i*2]=true;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    memset(dp,false,sizeof(dp));
    checkBFS();
    while (t--)
    {
        int n;
        cin>>n;
        if (dp[n]==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }


    // Write your code here

    return 0;
}
