#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long d1 = a[n-2] - a[0];
        long long d2 = a[n-1] - a[1];
        long long min1 = min(d1,d2);
        if (n<=2)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<min1<<endl;
            
        }
    
    }
}
