#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string a;
    getline(cin,a);
    int n = a.size();
    if (n==0)
    {
        cout<<"0000"<<endl;
    }
    else if (n==1)
    {
        string t = "000" + a;
        cout<<t<<endl;
    }
    else if (n==2)
    {
        string t = "00" + a;
        cout<<t<<endl;
    }
    else if (n==3)
    {
        string t = "0" + a;
        cout<<t<<endl;
    }
    else
    {
        cout<<a<<endl;       
    }
    return 0;
}