#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for (int r = 0; r < t ; r++)
    {
        int n;
        cin>>n;
        int a[n];
        for (int k = 0; k < n; k++)
        {
            cin>>a[k];
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (a[i]>=a[j])
                    {
                        flag = true;
                    }
                }
            }
        }
        if (flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
