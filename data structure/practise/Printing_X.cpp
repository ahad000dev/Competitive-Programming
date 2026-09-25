#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int space = 0;
    int mid = (n/2)+0.5;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i==j&&i!=mid&&j!=mid)
            {
                cout<<"\\";
            }
            else if (i+j==n-1&&i!=mid&&j!=mid)
            {
                cout<<"/";   
            }
            else if(i==mid&&j==mid)
            {
                cout<<"X";
            }
            else
            {
                cout<<" ";
            }
        }   
        cout<<endl;
    }

    // Write your code here

    return 0;
}
