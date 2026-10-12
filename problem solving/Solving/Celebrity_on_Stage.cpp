#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int h = a[k-1];
    int x = 0;
    int y = 0;
    for (int i = 0; i < k - 1; i++)
    {
            if (a[i]>h)
            {
                x++;
            }
    }
    for (int i = k ; i < n; i++)
    {  
            if (a[i]<h)
            {
                y++;
            }
    }
    cout<<x<<" "<<y<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
