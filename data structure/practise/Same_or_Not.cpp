#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n , m;
    cin>>n>>m;
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    queue<int> qt;
    for (int i = 0; i < m; i++)
    {
        int val;
        cin>>val;
        qt.push(val);
    }
    bool flag = true;
    if (m!=n)
    {
        flag = false;
    }
    else
    {   
        for (int i = 0; i < n || i<m; i++)
        {
            if (st.top() != qt.front())
            {
                flag = false;
            }
            if (!qt.empty())
            {
                qt.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
    }
    if(flag)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
        
    }
    // Write your code here
    return 0;
}
