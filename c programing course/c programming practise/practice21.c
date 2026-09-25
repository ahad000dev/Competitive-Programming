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
    int in;
    int val;
    scanf("%d %d",&in,&val);
    for (int j = 0; j < n; j++)
    {
        if (j==in)
        {
            arr[j]=val;
        }
    }
    for (int k = n-1; k >=0; k--)
    {
        printf("%d ",arr[k]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
