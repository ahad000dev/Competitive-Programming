#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for (int j = 0; j < n; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if (a[j]>a[k])
            {
                temp = a[j];
                a[j] = a[k];
                a[k]=temp;
                
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}