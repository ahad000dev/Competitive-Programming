#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    char name[100];
    int roll;
    double cgpa;
    student(char *n, int r , double c  )
    {
        strcpy(name, n);
        roll = r;
        cgpa = c;
    }
};
int main()
{
    student ahad("Ahad", 19101001, 3.75);
    cout<<ahad.name <<" "<<ahad.roll<<" "<<ahad.cgpa<<endl;
    return 0;
}