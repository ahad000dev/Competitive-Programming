#include <bits/stdc++.h>
using namespace std;
int par[1005];
int findRecurtion(int node)
{
    cout<<node<<" -> ";
    if (par[node]==-1)
    {
        return node;
    }
    int leader = findRecurtion(par[node]);
    // par[node] = leader; // find operation optimize
    return leader;
}
int find(int node)
{
    while (par[node]!=-1)
    {
        cout<<node<<" -> ";
        node = par[node];
    }
    cout<<node<<endl;
    return node;
}
int main()
{
    memset(par,-1,sizeof(par));
    par[0]=1;
    par[1]=-1 ;
    par[2]=1 ;
    par[3]= 1;
    par[4]=5 ;
    par[5]= 3;
    cout<<"this is using while loop == ";
    find(4);
    cout<<"this is using recurtion == ";
    findRecurtion(4);
    return 0;
}