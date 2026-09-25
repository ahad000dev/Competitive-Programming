#include <bits/stdc++.h>
using namespace std;
vector<int> al[1001];
bool vis[1001];
bool pathVis[1001];
bool cycle;
void dfs(int x)
{
    cout<<x<<" ";
    vis[x]=true;
    
    pathVis[x]=true;
    for (int c: al[x])
    {
        if(vis[c]==true && pathVis[c])
        {
            cycle=true;
        }
        if (vis[c]==false)
        {
            dfs(c);
        }
    }
    pathVis[x]=false;
}

int main()
{
    int n, m;
    cin>>n>>m;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        al[a].push_back(b);
    }

    memset(vis,false,sizeof(vis));
    memset(pathVis,false,sizeof(pathVis));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }
    cout<<endl;
    if (cycle)
    {
        cout<<"found cycle"<<endl;
    }
    else
    {
        cout<<"no cycle"<<endl;
    }
    return 0;
}