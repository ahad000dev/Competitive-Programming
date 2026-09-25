#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    int len1 = strlen(a);
    int len2 = strlen(b);
    for (int i = 0; i <= len2; i++)
    {
        a[i+len1]=b[i];
    }
    printf("%s %s",a,b);
    return 0;
    return 0;
}