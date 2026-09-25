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
        int max1 = -1;
        int max2 = -1;
        for (int i = 0; i < n; i++)
        {
            if (max1== -1 || a[i] > a[max1])
            {
                max2= max1;
                max1 = i;
            }
            else if(max2==-1||a[i]>a[max2])
            {
                max2 = i;
            }
        }
        int rh = max(max1,max2);
        int lh = min(max1,max2);
        cout<<lh<<" "<<rh<<endl;
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
