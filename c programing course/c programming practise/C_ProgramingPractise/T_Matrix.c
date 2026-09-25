#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int r;
    scanf("%d",&r);
    int a[r][r];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int primaryDia = 0;
    int secondaryDia = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < r; j++)
            {
            if (i==j)
            {
                primaryDia += a[i][j];
            }
            else if (i+j==r-1)
            {
                secondaryDia += a[i][j];
            }
        }
    }

int dif = abs(primaryDia - secondaryDia);
printf("%d", dif);
    return 0;
}