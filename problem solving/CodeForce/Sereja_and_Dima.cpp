#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i = 0;
    int j = n-1;
    int s = 0;
    int d = 0;
    bool turn = false;
    while (i<=j)
    {
        if (a[i]>a[j])
        {
            if (turn == false)
            {
              s += a[i];
              turn = true;
              i++;
            }
            else
            {
                d += a[i];
                turn = false;
                i++;
            }
        }
        else
        {
            if (turn == false)
            {
                s += a[j];
                turn = true;  
                j--;
            }
            else
            {
                d += a[j];
                turn = false;
                j--;
            }
            
        }
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}