#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        int len = s.size();
        bool in = false;
        for (int j = 0; j < len - 1; j++)
        {
            if (s[j] == s[j+1])
            {
                if(s[j]=='s')
                {
                    s.replace(j+1,0,"w");
                    cout<<s<<endl;
                    in = true;
                    break;
                }
                else
                {
                    s.replace(j+1,0,"s");
                    cout<<s<<endl;
                    in = true;
                    break;
                }
            }
        }
        if (!in)
        {   
            if(s[0] == 's')
            {
                cout<<"w"<<s<<endl;
            }
            else
            {
                cout<<"s"<<s<<endl;
            }
        }
    }

    return 0;
}