#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<string,string>> a;
    vector<pair<string,string>> b;
    for(int i =  0 ; i < n; i++)
    {
        string x,y;
        cin>>x>>y;
        a.push_back({x,y});
    }
    for (int i = 0; i < m; i++)
    {
        string x,y;
        cin>>x>>y;
        b.push_back({x,y});
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            string clean = b[i].second.substr(0, b[i].second.length() - 1);
            if (a[j].second == clean)
            {
                cout<<b[i].first<<" "<<b[i].second<<" #"<<a[j].first<<endl;
                break;
            }
        }
    }
    return 0;
}