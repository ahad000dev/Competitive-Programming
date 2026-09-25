#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ,s=1 ;
    scanf("%d",&n);
    int p= n*2 -1;
    int space = n-1;
    for (int i = 0; i < p; i++)
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
        if (i<n-1)
        {
            s+=2;
            space--;
        }
        else
        {
            s-=2;
            space++;
        }
    }
    return 0;
}