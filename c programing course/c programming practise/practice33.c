#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int val = 1;
    int space = n-1;
    int p =(n*2)-1;
    int flag = 0;
    for (int i = 1; i <= p ; i++)
    {
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= val; j++)
        {
            if (flag==0)
            {
                printf("#");
            }
            else
            {
                printf("-");
                
            }
        }
        if (flag==0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            
        }
        if (i<n)
        {
            space--;
            val+=2;
        }
        else
        {
            space++;
            val-=2;
        }
        printf("\n");
    }
    return 0;
}