#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int ,int> m;
    m[5] = 50;
    m[2] = 100;
    m[9] = 10;
    m[5] = 12;
    for(auto [key,val] : m)
    {
        cout<<key<<" -> "<<val;
        cout<<endl;
    }
    auto mf = m.find(1);
    if (mf==m.end())
    {
        cout<<"value not found"<<endl;
    }
    else
    {   
        cout<< mf->first << " " << mf->second << endl;
    }
    auto mf1 = m.find(9);
    if (mf1==m.end())
    {
        cout<<"value not found"<<endl;
    }
    else
    {   
        m.erase(mf1);
    }
    for(auto [key,val] : m)
    {
        cout<<key<<" -> "<<val;
        cout<<endl;
    }
    return 0;
}