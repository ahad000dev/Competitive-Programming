#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,greater<long long>());
    long long count = 0;
    for (int i = 0; i < n; i++)
    {
        int tem = 0;
        if (i>0&&a[i]>=a[i-1])
        {
            a[i]=a[i-1]-1;
        }
        if (a[i]<0)
        {
            a[i]=0;
        }
        tem = a[i];
        count+=tem;
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
