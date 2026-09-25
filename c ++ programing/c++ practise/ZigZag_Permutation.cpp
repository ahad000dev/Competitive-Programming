#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int i = 1;
    int j = n;
    while (i<=j)
    {
        if (i<j)
        {
            cout<<i <<" "<<j<<" ";
        }
        else
        {
            cout<<i;
        }
        i++;
        j--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
