#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int i=0;
    while (1)
    {
        if (a[i]=='\0'&&b[i]=='\0')
        {
            printf("equal");
            break;
        }
        else if (a[i]=='\0')
        {
            printf("a is small");
            break;
        }
        else if (b[i]=='\0')
        {
            printf("b is small");
            break;
        }
        else if (a[i]<b[i])
        {
            printf("a is small");
            break;
        }
        else if (a[i]>b[i])
        {
            printf("b is small");
            break;
        }
        else if (a[i]==b[i])
        {
            i++;
        }
           
    }
    return 0;
}