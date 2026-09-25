#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
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
        int l = 0;
        int r = n-1;
        int al =  0;
        int ar = n -1;
        long long mw = -1;
        while (l<r)
        {
            long long min1 = min(a[l],a[r]);
            long long cw = (r - l) * min1;
            if (cw>mw)
            {
                mw = cw;
                al = l;
                ar = r;
            }
          if (a[l] <= a[r]) {
                l++;
            } else {
                r--;
            }
        }
        cout<<al<<" "<<ar<<endl;
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
