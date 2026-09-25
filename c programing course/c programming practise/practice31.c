#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int primaryDia = 0;
    int secondaryDia = 0;
    if (r==c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i==j)
            {
                primaryDia+=a[i][j];
            }
            else if (i+j==r-1)
            {
                secondaryDia+=a[i][j]
            }
        }
    }
}
else
{
    printf("its not a diagonal");
}
int dif = primaryDia - secondaryDia;
printf("%d", abs(dif));
    return 0;
}