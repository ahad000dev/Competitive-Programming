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
long long dis[1005];
int n,m;
vector<Edge> el;

int main()
{
    cin>>n>>m;
    while (m--)
    {
        int a,b;
        long long c;
        cin>>a>>b>>c;
        el.push_back(Edge(a,b,c));
        
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i]=LLONG_MAX;
    }
    int s;
    cin>>s;
    dis[s]=0;
    for (int i = 1; i <= n-1; i++)
    {
        for(auto e : el)
        {
            int a,b;
            long long c;
            a = e.a;
            b = e.b;
            c = e.c;
            if (dis[a] != LLONG_MAX && dis[a]+c<dis[b])
            {
                dis[b] = dis[a] + c;
            }        
        }
    }
    bool flag = false;
    for(auto e : el)
    {
        int a,b;
        long long c;
        a = e.a;
        b = e.b;
        c = e.c;
        if (dis[a] != LLONG_MAX && dis[a]+c<dis[b])
        {
            flag= true;
        }        
    }
    if (flag)
    {
        cout<<"Negative Cycle Detected"<<endl;
        return 0;
    }
    int t;
    cin>>t;
    int a[t];
    for (size_t i = 0; i < n; i++)
    {
        int q;
        cin>>q;
        a[i]=q;
    }
  for (int i = 0; i < n; i++)
  {
    if (dis[a[i]]==LLONG_MAX)
    {
        cout<<"Not Possible"<<endl;
    }
    else
    {
        cout<<dis[a[i]]<<endl;
    }
  }
    
    return 0;
}