#include <bits/stdc++.h>
using namespace std;
vector<int> al[1001];
bool vis[1001];

void bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[0]=true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for (int c : al[par])
        {
            if (vis[c]==false)
            {
                q.push(c);
                vis[c]=true;
                
            }
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
    int src,dis;
    cin>>src;
    cin>>dis;
    bfs(src);
    if (vis[dis]==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}