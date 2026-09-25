#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    int flag = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (a[i][j]!=0)
            {
                flag = 1;
            }
        }
    }
    int countZero = 0;   
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if (a[i][j]==0)
            {
                countZero++;
            }
        }
    }
    int totalValue = m * n;


    if (flag == 0)
    {
        printf("its a zero\n");
    }
    else
    {
        printf("it is not a zero\n");
    }
    if (totalValue == countZero)
    {
        printf("its a zero\n");
    }
    else
    {
        printf("it is not a zero\n");
    }
    return 0;
}