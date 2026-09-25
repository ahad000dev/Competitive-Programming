#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,k;
    cin>>n>>k;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];    
    }
    int max = 0;
    for (int j = 0; j < n; j++)
    {
        if (a[j]<=k)
        {
            if (a[j]>max)
            {
                max = a[j];
            }
        }
    }
    if (max == 0)
    {
        cout << -1;
        
    }
    else
    {
        cout << max; 
        
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
