#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    { 
        int id[3];
        char n[3][101];
        char s[3][2];
        int m[3];
        for (int j = 0; j < 3; j++)
        {
            cin>>id[j]>>n[j]>>s[j]>>m[j];  

        }
        int l=0;
        for (int j = 0; j < 3; j++)
        {
            if (m[j]>l)
            {
                l=m[j];
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if (l==m[j])
            {
                cout<<id[j]<<" "<<n[j]<<" "<<s[j]<<" "<<m[j];   
                cout<<"\n";
                break;
            }
            
        }
        
    }
    // Write your code here

    return 0;
}
