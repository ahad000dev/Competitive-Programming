#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ,s=1;
    scanf("%d",&n);
    int space = n-1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < space; k++)
        {
            printf(" ");
        }
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        printf("\n");
        s+=2;
        space--;
    }
    return 0;
}