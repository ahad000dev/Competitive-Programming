#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a;
    if (n==1)
    {
        a = 6;
    }
    else
    {
       a = 6 + n/2; 
    }
    int space = a - 1;
    int val = 1;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < val; k++)
        {
            printf("*");
        }
        printf("\n");
        if (i<a)
        {
            val+=2;
            space--;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("     ");
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
