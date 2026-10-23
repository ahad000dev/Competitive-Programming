#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
       string s;
       cin>>s;
       string r = "";
       for (int i = 0; i < n; i++)
       {
        bool f = false;
        int rs = r.size();
        for (int j = 0; j < rs; j++)
        {
            if (s[i]==r[j])
            {
                f = true;
                break;
            }
        }
        if (!f)
        {
            r += s[i];
        }
       }
       sort(r.begin(),r.end());
       int rs2 = r.size();
       for (int i = 0; i < n; i++)
       {
        for (int j = 0; j < rs2; j++)
        {
            if (s[i]==r[j])
            {
                s[i] = r[rs2 - 1 -j];
                break;
            }
        }
        
       }
        cout<<s<<endl;;
    }
    return 0;
}