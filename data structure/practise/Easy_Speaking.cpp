#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
        int n;
        cin>>n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        bool flag = false;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] !='a' && a[i]!='e' && a[i]!='i' && a[i] !='o' && a[i] !='u' )
            {
                count+=1;
                if (count == 4)
                {
                    flag = true;
                    break;
                }

            }
            else{
                count= 0;
            }
        }
        if (flag == true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }
    return 0;
}