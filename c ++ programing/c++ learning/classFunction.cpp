#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int name;
    int roll;
    double cgpa;
    student(int n, int r , double c  )
    {
        name = n;
        roll = r;
        cgpa = c;
    }
};
student fun()
{
    student ahad(1, 19101001, 3.75);
    return ahad;
}
int main()
{
    student ahad = fun();
    cout<<ahad.name <<" "<<ahad.roll<<" "<<ahad.cgpa<<endl;
    return 0;
}