#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> el;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        el.push_back({a,b});
    }
    for (pair<int,int> x:el)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}