#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    stringstream ss(s);
    string word;
    while (ss>>word)
    {
        sort(word.begin(),word.end());
        cout<<word<<" ";   
    }
    cout<<endl;
   stringstream pp(s);
   string w;
   while (pp>>w)
   {
    reverse(w.begin(),w.end());
    cout<<w<<" ";
   }
   cout<<endl;
    return 0;
}