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
    long long pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    int idx = 0;
    long long val = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        long long a = 0;
        long long b = pre[i];
        if (i>0)
        {
            a = pre[n-1] - pre[i-1];
        }
        else
        {
            a = pre[n-1];
        }
        if (a==b)
        {
            val=a;
            idx = i + 1;
            found = true;
            break;
        }
    }
    if (found==false)
    {
        cout<<"UNSTABLE"<<endl;
    }
    else
    {
        cout<<val<<" "<<idx<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
