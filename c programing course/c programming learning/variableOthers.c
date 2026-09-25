#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num = 45;
    num = 50;
    char name = 'a';
    float floating = 2.110;
    bool a= true;
    bool b = false;
    long long int x = 124578634147; // above 4 bit integer number
    double y = 3212.65453123; // above 4 bit floating number
    printf("%lld | %lf\n",x,y);
    printf("%d | %d\n",a,b);


    printf("%d is a number %c is %.3f",num, name, floating);
}