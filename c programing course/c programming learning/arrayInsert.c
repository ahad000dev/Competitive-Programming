#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int index,value;
    scanf("%d %d",&index,&value);
    for (int j = n; j >= index+1 ; j--)
    {
        arr[j]=arr[j-1];
    }
    arr[index]=value;
    for (int k = 0; k < n+1; k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}