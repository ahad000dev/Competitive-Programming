// codeforse 1883B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        int i = 0;
        while (i<a)
        {
            if (s[i]==s[i+1]&&i+1<a)
            {
                i+=2;
            }
            else
            {
                b--;
                i++;
            }
            
        }
        if (b>=-1&&b<=a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}