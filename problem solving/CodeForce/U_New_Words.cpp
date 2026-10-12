#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int len = s.size();
    int n[5] ={0};
    for (int i = 0; i < len  ; i++)
    {
        if (s[i]=='e' || s[i] == 'E')
        {
            n[0]+=1;
        }
        if (s[i]=='g' || s[i] == 'G')
        {
            n[1]+=1;
        }
        if (s[i]=='y' || s[i] == 'Y')
        {
            n[2]+=1;
        }
        if (s[i]=='p' || s[i] == 'P')
        {
            n[3]+=1;
        }
        if (s[i]=='t' || s[i] == 'T')
        {
            n[4]+=1;
        }
    }
    int result = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
        result = min(result, n[i]);
    }
    cout<<result<<endl;
    return 0;
}