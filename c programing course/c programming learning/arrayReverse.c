#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int i=0;
    int j=n-1;
    while (i<j)
    {
        int tmp = arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
        i++;
        j--;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}