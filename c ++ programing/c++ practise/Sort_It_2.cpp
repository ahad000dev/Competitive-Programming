#include <bits/stdc++.h>

using namespace std;

int* sort_it(int n)
{

    int *a = new int[n]; 
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    return a;
}

int main()
{
    int n;
    cin>>n;
    int*a= sort_it(n);
    for (int i = n-1 ; i >= 0 ; i--)
    {
        cout<<a[i]<<" ";
    }
    
    // Write your code here
    return 0;
}
