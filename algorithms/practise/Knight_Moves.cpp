#include <bits/stdc++.h>
using namespace std;
char grid[1005][1005];
bool vis[1005][1005];
int n,m;
int level[1005][1005];
vector<pair<int,int>> d = {{-2, -1}, {-2, 1}, {-1, -2}, {-1, 2},{1, -2},  {1, 2},  {2, -1},  {2, 1}};
bool valid(int i,int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
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
    level[s1][s2] = 0;
    while (!q.empty())
    {
        pair<int,int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 8; i++)
        {
            int c1 = par_i + d[i].first;
            int c2 = par_j + d[i].second;
            if (valid(c1,c2) && !vis[c1][c2])
            {
                q.push({c1,c2});
                vis[c1][c2] = true;
                level[c1][c2] = level[par_i][par_j] + 1;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n>>m;
        int s1,s2,d1,d2;
        cin>>s1>>s2;
        cin>>d1>>d2;
        memset(vis,false,sizeof(vis));
        memset(level,-1,sizeof(level));
        bfs(s1,s2);
        cout<<level[d1][d2]<<endl;

    }
    return 0;
}