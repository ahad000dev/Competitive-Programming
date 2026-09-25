#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x = 100;
    printf("%d\n",x);
    printf("%p\n",&x);
    int * ptr= &x;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    *ptr = 300;
    printf("%d\n",x);
    int a[5]={10,20,30,40,50};
    *(a+1)=100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
        printf("%p\n",&a[i]);
    }
    return 0;
}