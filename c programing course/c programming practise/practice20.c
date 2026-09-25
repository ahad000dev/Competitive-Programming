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
    int sumPos=0;
    int sumNeg=0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]>0)
        {
            sumPos+=arr[j];
        }
        else if (arr[j]<0)
        {
            sumNeg+=arr[j];
        }
    }
    printf("%d ",sumPos);
    printf("%d",sumNeg);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
