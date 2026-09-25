#include<bits/stdc++.h>
using namespace std;
class studentData
{
    public:
    string name;
    int roll;
    studentData(string name, int roll)
    {
        this->name= name;
        this->roll = roll;
    }
    void student()
    {
        cout<<"student roll: "<< roll<<" "<<"student name: "<<name<<endl;
 
    }
};
int main()
{
    studentData ahad("abdul ahad",52);
    ahad.student();
    studentData nabil("tanvir ahmed nabil",45);
    nabil.student();
    return 0;
}