#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<pair<string , string>> a;
    for (int i = 0; i<t; i++)
    {

        string x,y;
        cin>>x>>y;
        bool m = false;
        int s2 = a.size();     
            for (int j = 0; j < s2; j++)
            {
                if (a[j].second == x)
                {
                    a[j].second = y;
                    m=true;
                    break;
                }
                
            }
        if (!m)
        {
            a.push_back({x,y});
        }

}
    int s1 = a.size();

    cout<<s1<<endl;
    for (int i = 0; i < s1 ; i++)
    {
        if (a[i].first != "")
        {
            cout<<a[i].first<<" "<<a[i].second<<endl;
        }
    }

    return 0;
}