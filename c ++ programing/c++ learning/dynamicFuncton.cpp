#include <iostream>
using namespace std;
#include<iomanip>
int* func()
{
    int* a = new int;
    cin>>*a;
    return a;
}
int main()
{
    int* p = func();
    cout<<*p<<endl;
    return 0;
}