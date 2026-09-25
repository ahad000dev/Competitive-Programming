#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum1(int num1,int num2)
{
    int ans= num1+num2;
    return ans;
}
int sum2()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans= a+b;
    return ans;
}
void sum3()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans= a+b;
    printf("ans is %d\n",ans);
    
}
void sum4(int num1,int num2)
{
    int ans= num1+num2;
    printf("ans is %d\n",ans);
    
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int val1 = sum1(a,b);
    int val2 = sum2();
    sum3();
    sum4(a,b);
    printf("ans is %d\n",val1);
    printf("ans is %d\n",val2);
    return 0;
}