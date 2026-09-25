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
    int n, m;
    cin>>n>>m;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        al[a].push_back(b);
        al[b].push_back(a);
    }

    memset(vis,false,sizeof(vis));
    int count = 0 ;
    for (int i = 0; i < n ; i++)
    {
        if (vis[i]==false)
        {
            dfs(i);
            cout<<endl;
            count++;
        }
        
    }
    cout<<count<<endl;
    return 0;
}