#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    list<int>s;
    for (int i = 0; i < t; i++)
    {
        int x,v;
        cin>>x>>v;
        if (x>s.size() )
        {
            cout<<"Invalid"<<endl;
            continue;
        }
        else if (x<s.size())
        {
            s.insert(next(s.begin(),x),v);   
        }
        else
        {
            s.push_back(v);  
        }
        if (!s.empty())
        {       
            cout<<"L -> ";
            for (auto it = s.begin(); it != s.end(); it++)
            {
                cout<<*it<<" ";
            }
            cout<<endl;
            cout<<"R -> ";
            auto it = s.end();
            while (it != s.begin())
            {
                --it;
                cout << *it << " ";
            }
            cout<<endl;
        }
    }
    // Write your code here
    
    return 0;
}
