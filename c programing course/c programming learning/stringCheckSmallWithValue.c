#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int val = strcmp(a,b);
    printf("%d\n",val);
    if (val<0)
    {
        printf("a is small");
    }
    else if (val>0)
    {
        printf("b is small");
    }
    else
    {
        printf("equal");
    }
    return 0;
}