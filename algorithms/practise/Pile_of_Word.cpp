#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        string s1,s2;
        cin >> s1 >> s2;
        int len1= s1.size();
        int len2= s2.size();
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        if (s1==s2)
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
