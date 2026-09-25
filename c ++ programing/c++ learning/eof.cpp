#include <iostream>
using namespace std;
int main()
{
    int a;
    while(cin>>a)
    {
        cout<<a<<"\n";
        a%2==0?cout<<"even":cout<<"odd";
    }
    return 0;
}