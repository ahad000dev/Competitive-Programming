#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int maxEven = a[0] ;
    int maxOdd = -1;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            maxEven = max(maxEven,a[i]);
        }
        else
        {
            if (maxOdd == -1)
            {
                maxOdd = a[i];
            }
            else
            {   
                maxOdd = max(maxOdd,a[i]);
            }
        }
    }
    if (n<2)
    {
        cout<<a[0];
    }
    else
    {   
        int num = maxOdd + maxEven;
        cout<<num<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
