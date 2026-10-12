#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    char a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count = 0;
    for (int i = 0; i < n-2; i++)
    {
       if (a[i]=='1'&&a[i+1]=='0'&&a[i+2]=='1')
       {
        count++;
       }
       if (a[i]== '0' && a[i+1] == '1' && a[i+2]== '0')
       {
        count++;
       }
    }
    cout<<count<<endl;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
