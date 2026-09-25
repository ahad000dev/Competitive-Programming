#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abdul ahad";

    cout<< s.size() <<endl;
    string t("hello world!",6);
    sort(t.begin(), t.end());
    for (char n : s)
    {
        cout<<n<<endl;
    }
    reverse(t.begin(),t.end());
    cout<< t << endl;
    return 0;
}