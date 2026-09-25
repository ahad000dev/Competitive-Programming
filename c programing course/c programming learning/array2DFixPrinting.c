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
    int indexR;
    scanf("%d",&indexR);
    int indexC;
    scanf("%d",&indexC);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[indexR][i]);
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        printf("%d ",a[i][indexC]);
    }
    return 0;
}