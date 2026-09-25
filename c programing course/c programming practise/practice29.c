#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void arr(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]<=10)
        {
            printf("a[%d] = %d\n",i,a[i]);
        }
    }
}


int main() {
     int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    arr(a,n);
    return 0;
}