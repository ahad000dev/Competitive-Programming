#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    for (auto it= s.begin();it<s.end(); it++)
    {
        cout<<*it<<endl;
    }
   reverse(s.begin(),s.end());
   for (char i : s)
   {
    cout<<i<<" ";
   }
    return 0 ;
}