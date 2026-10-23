#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string a ;
        cin>>a;
        int len1 = a.size();
        bool w[len1];
        memset(w,true,len1);
        stack<int> ui ;
        stack<int> li;
        for (int i = 0; i < len1; i++)
        {
            if (a[i]=='b')
            {
                w[i] = false;
                if (!li.empty())
                {   
                    w[li.top()] = false;
                    li.pop();
                }
            }
            else if (a[i]=='B')
            {
                w[i] = false;
                if (!ui.empty())
                {   
                    w[ui.top()] = false;
                    ui.pop();
                }
            }
            else
            {
                if (a[i]>='a' && a[i]<='z')
                {
                    li.push(i);
                }
                else if (a[i]>='A' && a[i]<='Z')
                {
                    ui.push(i);
                }
            }
        }
        for (int i = 0; i < len1; i++)
        {
            if (w[i])
            {
                cout<<a[i];
            }
        }
        cout<<endl;
    }
    return 0;
}