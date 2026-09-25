#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string s , x;
        cin>>s>>x;
        int sLenght = s.size();
        int xLenght = x.size();
        for (int i = 0; i < sLenght; i++)
        {
            int val = -1;
            int match = 1;
            for (int j = 0; j < xLenght; j++)
            {
                if (s[i+j]!=x[j])
                {
                    match = 0;
                }
            }
            if (match==1)
            {
                val = i;
            }
            if (val!=-1)
            {
                s.erase(val, xLenght);
                s.insert(val,"#");
                
            }
        }
        cout<<s<<endl;
    }
    
    // Write your code here
    return 0;
}
