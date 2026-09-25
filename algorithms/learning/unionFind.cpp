#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_set[1005];
int findRecurtion(int node)
{
    cout<<node<<" -> ";
    if (par[node]==-1)
    {
        return node;
    }
    int leader = findRecurtion(par[node]);
    par[node] = leader; // find operation optimize
    return leader;
}
void dus(int node1,int node2)
{
    int leader1 =findRecurtion(node1) ;
    int leader2 = findRecurtion(node2);
    if (group_set[leader1]>group_set[leader2])
    {
        par[leader1]=leader2;
        group_set[leader1]+=group_set[leader2];
    }
    else
    {
        par[leader2]=leader1;
        group_set[leader2]+=group_set[leader1];
    }
}
int main()
{
    memset(par,-1,sizeof(par));
    memset(group_set, 1,sizeof(group_set));
    dus(1,2);
    for (int i = 0; i < 6; i++)
    {
        cout<<i<<" -> "<<par[i]<<endl;
    }
    return 0;
}