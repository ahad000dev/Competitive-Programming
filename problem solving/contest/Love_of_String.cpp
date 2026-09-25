#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k;
    cin>>n>>k;
    char a[n];
    for (int l = 0; l < n; l++)
    {
        cin>>a[l];
    }
    for (int i = 0; i < k; i++)
    {
        for (int j= i+1; j < k; j++)
        {
            if (a[i]>a[j])
            {
                char tem = a[i];
                a[i]= a[j];
                a[j]=tem;
            }
        }
    }
    for (int s = 0; s < n; s++)
    {
        cout<<a[s];
    }
    cout<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
