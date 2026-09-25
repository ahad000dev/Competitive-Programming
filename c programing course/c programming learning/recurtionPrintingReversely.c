#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hello(int a , int n)
{
    if (a==n)
    {
        printf("%d\n",a);
        return;
    }
    hello(a+1,n);
    printf("%d\n",a);

}

int main() {
    int a=1;
    int n;
    scanf("%d",&n);
    hello(a,n);
    return 0;
}