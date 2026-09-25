#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int flag = 1;
    while(ss >> word)
    {
        if (word == "Jessica")
        {
            cout<<"YES"<<endl;
            flag = 0;
            break;
        }
    }
    if (flag != 0)
    {
        cout<<"NO"<<endl;
    }

    // Write your code here
    return 0;
}
