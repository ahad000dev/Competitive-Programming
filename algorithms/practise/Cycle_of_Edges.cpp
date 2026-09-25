#include <bits/stdc++.h>
using namespace std;
int par[100005];
int group_set[100005];
int findRecurtion(int node)
{
    if (par[node]==-1)
    {
        return node;
    }
    int leader = findRecurtion(par[node]);
    par[node] = leader; 
    return leader;
}
int main()
{
    memset(par,-1,sizeof(par));
    memset(group_set, 1,sizeof(group_set));
    int n,e;
    cin>>n>>e;
    int cycal = 0;
    for (int i = 0; i < e; i++)
    {   
        int a,b;
        cin>>a>>b;
        int leader1 =findRecurtion(a) ;
        int leader2 = findRecurtion(b);
        if (leader1==leader2)
        {
            cycal ++;
        }
        else
        {
            par[leader1]=leader2;
        }
    }
    cout<<cycal<<endl;
    return 0;
}