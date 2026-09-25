#include <iostream>
using namespace std;
#include<iomanip>
int main()
{
    int a;
    double b;
    char c;
    cin>>a>>b>>c;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<(int)c;
    double x = 32.4586354;
    cout<< fixed << setprecision(3) <<x;
}