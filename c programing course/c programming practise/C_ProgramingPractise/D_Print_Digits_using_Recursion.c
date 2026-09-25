#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void digit(int s)
{
    if (s==0)
    {
        return;
    }
    digit(s/10);
    printf("%d ",s%10);
}


int main() {
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int s;
        scanf("%d",&s);
        printf("\n");
        digit(s);
    }
    return 0;
}