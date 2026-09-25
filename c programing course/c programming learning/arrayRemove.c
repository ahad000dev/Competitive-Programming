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
    int index;
    scanf("%d",&index);
    for (int j = index; j <n ; j++)
    {
        arr[j]=arr[j+1];
    }

    for (int k = 0; k < n-1; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}