#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string a;
        getline(cin,a);
        sort(a.begin(),a.end());
        // cout<<a<<endl;
        int s = a.size();
        int val = 0;
        int j = 0;
        while (j<s)
        {
            if (j == s-1 || a[j]!=a[j+1])
            {
                val +=1;
                j +=1;
            }
            else
            {
                j+=2;
            }
        }
        if (val <= 1)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<val-1<<endl;
        
        }
}
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}