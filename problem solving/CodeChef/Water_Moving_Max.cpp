#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int l = n-k-1;
        if (l<0)
        {
            l = 0;
        }
        long long count = 0;
        for (int i = n-1; i >= l; i--)
        {
            count += a[i]; 
        }
        cout<<count<<endl;
    }
}
