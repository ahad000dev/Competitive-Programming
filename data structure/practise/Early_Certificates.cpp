#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        
        int n,m;
        cin>>n>>m;
    cin.ignore();
    vector<char> a(n);
    vector<char> b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    string s = "";
        int maxLen = max(n,m);

        for (int i = 0; i <maxLen; i++)
        {
            if (a[i]==b[i])
            {
                s.push_back(a[i]);
            }
            else
            {
                break;
            }
        }

    cout<<s<<endl;
}
	// your code goes here

}
