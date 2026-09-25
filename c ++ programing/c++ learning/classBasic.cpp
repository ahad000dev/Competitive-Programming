#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    student s;
    student t;
    cin.getline(s.name,100);
    cin>>s.roll>>s.cgpa;
    cin.ignore();
    cin.getline(t.name,100);
    cin>>t.roll>>t.cgpa;
    cout<<s.name <<" "<<s.roll<<" "<<s.cgpa<<endl;
    cout<<t.name <<" "<<t.roll<<" "<<t.cgpa<<endl;
    return 0;
}