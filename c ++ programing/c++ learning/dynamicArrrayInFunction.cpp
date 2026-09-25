#include <iostream>
using namespace std;
#include<iomanip>
int* arr()
{
    int *a = new int[10];
    for(int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{
    int *a = arr();
    for(int i=0; i<10; i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}