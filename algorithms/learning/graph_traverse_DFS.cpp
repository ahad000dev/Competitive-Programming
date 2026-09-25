#include <bits/stdc++.h>
using namespace std;
vector<int> al[1001];
bool vis[1001];

void dfs(int x)
{
    cout<<x<<" ";
    vis[x]=true;
    for (int c: al[x])
    {
        if (vis[c]==false)
        {
            dfs(c);
        }
    }

}

int main()
{
    int m;
    cin>>m;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        al[a].push_back(b);
        al[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    dfs(0);
    return 0;
}