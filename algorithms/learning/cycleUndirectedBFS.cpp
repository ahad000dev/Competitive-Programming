#include <bits/stdc++.h>
using namespace std;
vector<int> al[1001];
bool vis[1001];
int parant[1001];
bool cycle;
void bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[0]=true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        cout<<par<<" ";
        for (int c : al[par])
        {
            if(vis[c]==true && parant[par] !=c)
            {
                cycle=true;
            }
            if (vis[c]==false)
            {
                q.push(c);
                vis[c]=true;
                parant[c]=par;
            }
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
    memset(parant,-1,sizeof(parant));
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
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