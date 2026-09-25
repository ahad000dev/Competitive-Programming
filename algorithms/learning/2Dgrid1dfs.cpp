#include <bits/stdc++.h>
using namespace std;
char grid[105][105];
bool vis[105][105];
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
void dfs(int s1,int s2)
{
    cout<<s1<<" "<<s2<<endl;
    vis[s1][s2]=true;
    for (int i = 0; i < 4; i++)
    {
        int c1,c2;
        c1 = s1 + d[i].first;
        c2 = s2 + d[i].second;
        if (valid(c1,c2)==true && !vis[c1][c2] )
        {
            dfs(c1,c2);
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
        }
    }
    int s1,s2;
    cin>>s1>>s2;
    memset(vis,false,sizeof(vis));
    dfs(s1,s2);
    return 0;
}