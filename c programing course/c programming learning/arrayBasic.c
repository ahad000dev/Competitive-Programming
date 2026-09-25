#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s;
    scanf("%d",&s);
    int arr[s];
    for (int i = 0; i < s; i++)
    {
       scanf("%d",&arr[i]) ;
    }
    for (int j = 0; j < s; j++)
    {
        printf("%d\n",arr[j]);
    }
    int sum=0;
    for (int k = 0; k < s; k++)
    {
        sum += arr[k];
    }
    printf("%d\n",sum);
    
    return 0;
}