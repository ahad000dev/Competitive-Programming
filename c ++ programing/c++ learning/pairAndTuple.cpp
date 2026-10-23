#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    pair<string,int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i].first<<" "<<a[i].second<<endl;
        
    }
    tuple<string, int, bool, string> b = { "abdul ahad", 1201, true, "male" };
    auto [name, roll, type, gender] = b; 
    cout << name << " " << roll << " " << type << " " << gender << endl;
    return 0;
}