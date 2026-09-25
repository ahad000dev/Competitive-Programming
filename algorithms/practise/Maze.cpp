#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
pair<int,int> pre[1005][1005];
int n,m;
int s1,s2;
int d1,d2;
vector<pair<int,int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
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
void bfs(int s1,int s2)
{
    queue<pair<int,int>> q;
    q.push({s1,s2});
    vis[s1][s2]= true;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        if (par_i == d1 && par_j == d2)
        {
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            int c1 = par_i + d[i].first;
            int c2 = par_j + d[i].second;
            if (valid(c1,c2) && !vis[c1][c2] && (grid[c1][c2] == '.' || grid[c1][c2] == 'D'))
            {
                q.push({c1,c2});
                vis[c1][c2] = true;
                pre[c1][c2]={par_i,par_j};
            }
        }
    }
}
int main()
{
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>grid[i][j];
            if (grid[i][j]=='R')
            {
                s1=i;
                s2=j;
            }
            if (grid[i][j]=='D')
            {
                d1=i;
                d2=j;
            }
        }
    }
    cin>>s1>>s2;
    memset(vis,false,sizeof(vis));
    bfs(s1,s2);
    if (vis[d1][d2])
    {
        pair<int,int> cur = pre[d1][d2];
        while (cur.first !=s1 || cur.second !=s2)
        {
            grid[cur.first][cur.second]='X';
            cur = pre[cur.first][cur.second];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<grid[i][j];
        }
        cout<<endl;
    }
    return 0;
}