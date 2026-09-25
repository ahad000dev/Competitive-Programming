#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr1[5]={12,54,9,87,48};
    int arr2[5]={12,54,78};
    int arr3[]= {12,547,848,45};
    int arr4[4]= {0};
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    for (int j = 0; j < 5; j++)
    {
        printf("%d ",arr2[j]);
    }
    printf("\n");
    for (int k = 0; k < 5; k++)
    {
        printf("%d ",arr3[k]);
    }
    printf("\n");
    for (int l = 0; l < 7; l++)
    {
        printf("%d ",arr4[l]);
    }
    return 0;
}