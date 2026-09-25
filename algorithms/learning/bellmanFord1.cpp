#include <bits/stdc++.h>
using namespace std;
class Edge
{
    public:
    int a, b, c;
    Edge(int a , int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

};
int dis[1005];
int n,m;
vector<Edge> el;

int main()
{
    cin>>n>>m;
    while (m--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        el.push_back(Edge(a,b,c));
        
    }
    for(auto i : el)
    {
        cout<<i.a<<" "<<i.b<<" "<<i.c<<endl;
    }

    for (int i = 0; i < n; i++)
    {
        dis[i]=INT_MAX;
    }
    dis[0]=0;
    for (int i = 0; i < n-1; i++)
    {
        for(auto e : el)
        {
            int a,b,c;
            a = e.a;
            b = e.b;
            c = e.c;
            if (dis[a] != INT_MAX && dis[a]+c<dis[b])
            {
                dis[b] = dis[a] + c;
            }        
        }
    }
    bool flag = false;
    for(auto e : el)
    {
        int a,b,c;
        a = e.a;
        b = e.b;
        c = e.c;
        if (dis[a] != INT_MAX && dis[a]+c<dis[b])
        {
            flag= true;
        }        
    }
    if (flag)
    {
        cout<<"it have a cycle"<<endl;
    }
    else
    {
        cout<<"it have no cycle"<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<i<<" -> "<<dis[i]<<", ";
    }
    cout<<endl;
    return 0;
}