#include <bits/stdc++.h>
using namespace std;
vector<int> al[1001];
bool vis[1001];
int level[1001];
int parent[1001];
void bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[x]=true;
    level[x]=0;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        cout<<par<<" ";
        for (int c : al[par])
        {
            if (!vis[c])
            {
                q.push(c);
                vis[c]=true;
                level[c]=level[par]+1;
                parent[c]=par;
            }
        }
    }
    cout<<endl;
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
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    int src,dis;
    cin>>src>>dis;
    bfs(src);
    for (int i = 0; i <= n; i++)
    {
        cout<<i<<"->"<<parent[i]<<endl;
    }
    cout<<level[dis]<<endl;
    int node = dis;
    while (node != -1)
    {
        cout<<node<<" ";
        node = parent[node];
    }
    cout<<endl;
    return 0;
}