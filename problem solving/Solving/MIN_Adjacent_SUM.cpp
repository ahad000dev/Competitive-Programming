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
    sort(a,a+n);
    long long sum = a[0] + a[1];
    cout<<sum<<endl;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
