#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[101];
    scanf("%s",s);
    int count=0;
    for (int i = 0; s[i] !='\0'; i++)
    {
        count +=1;
    }
    printf("%d",count);
    return 0;

}