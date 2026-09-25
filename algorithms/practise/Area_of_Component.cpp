#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n,m;
vector<pair<int,int>> d = {{-1,0},{1,0},{0,-1},{0,1}};
bool valid(int i,int j)
{
    if (i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int bfs(int s1,int s2)
{
    queue<pair<int,int>> q;
    q.push({s1,s2});
    vis[s1][s2]= true;
    int mc = 0;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        mc++;
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 4; i++)
        {
            int c1 = par_i + d[i].first;
            int c2 = par_j + d[i].second;
            if (valid(c1,c2) && !vis[c1][c2] && grid[c1][c2]=='.')
            {
                q.push({c1,c2});
                vis[c1][c2] = true;
            }
        }
    }
    return mc;
}
int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    int count = INT_MAX; 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vis[i][j]==false && grid[i][j]=='.')
            {
                int mc = bfs(i,j);
                count =  min(count, mc);
            }
        }
    }
    if (count==INT_MAX)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<count<<endl;
    }
    return 0;
}