#include <iostream>
using namespace std;
#include<iomanip>
int main()
{
   int* a = new int[5];
   for (int i = 0; i < 5; i++)
   {
    cin>>a[i];
   }
   for (int i = 0; i < 5; i++)
   {
    cout<<a[i]<<" ";
   }

    return 0;
}