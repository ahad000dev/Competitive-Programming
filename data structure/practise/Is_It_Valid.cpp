#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string s;
        getline(cin,s);
        stack<char>st;
        for (char c:s)
        {        
            if (!st.empty() && st.top()!= c)
            {
                st.pop();
            }
            else
            {
                st.push(c);
            }
        }
        if (st.empty())
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    // Write your code here
    return 0;
}
