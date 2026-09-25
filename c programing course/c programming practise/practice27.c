#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a[],int n)
{
    int max= a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    return max ;
}
int min(int a[],int n)
{
    int min= a[0];
    for (int i = 0; i < n; i++)
    {
         if (a[i]<min)
        {
            min = a[i];
        }
    }
    return min;
}

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int minNum =min(a,n);
    int maxNum =max(a,n);
    printf("%d %d",minNum,maxNum);
    return 0;
}