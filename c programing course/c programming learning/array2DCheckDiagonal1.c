#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag = 1;
    if (m==n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j<n; j++)
            {
                if (i != j)
                {
                    if (a[i][j]!=0)
                    {
                        flag=0;
                        printf("it not a diagonal");
                        break;
                    }
                }
            }
            
        }
        if (flag==1)
        {
            printf("it a diagonal");
        }
    }
    else
    {
        printf("it not a diagonal");
    }
    return 0;
}