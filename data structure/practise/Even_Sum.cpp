#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int k = 0; k < t; k++)
    {
      int n;
      cin>>n;
      int a[n];
      for (int j = 0; j < n; j++)
      {
        cin>>a[j];
      }
      int flag = 0;
      int pre = 0;
      for (int i = 0; i < n; i++)
      {
        pre += a[i];
        if (pre%2 == 0)
        {
            flag = 1;
            break;
        }
       }
        if (flag == 1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<< "No"<<endl;
        }
    }
	// your code goes here
}