#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin>>n>>q;
   vector<long long>a(n+1,0);
   int val = 1;
    for (int i = 1; i <= n; i++)
    {
        a[i] = a[i-1] + val;
        if (i%3==0)
        {
            val++;
        }
    }
    for (int i = 0; i < q; i++)
    {
        int l,r;
        cin>>l>>r;
        if (l<1)
        {
            l=1;
        }
        if (r>n)
        {
            r=n;
        }
        if (l<=r)
        {   
            long long sum = a[r]-a[l-1];
            cout<<sum<<endl;
        }
        else
        {
            cout<<0<<endl;   
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
