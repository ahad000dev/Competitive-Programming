#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);

int a[n];
for (int j = 0; j < n; j++)
{
    scanf("%d",&a[j]);
}
int b[n];
for (int i = 0; i < n; i++)
{
    b[i]=a[i];
    
}
for (int k = 0; k < n; k++)
{
    for (int l = k+1; l < n; l++)
    { 
        if (b[k]>b[l])
        {
            int temp = b[l];
            b[l] = b[k];
            b[k]=temp;
        }
    }
}
int c[n];
for (int i = 0; i < n; i++)
{
    int diff = a[i]-b[i];
    c[i]=abs(diff);
    
}

 for (int i = 0; i < n; i++)
 {
     printf("%d ",c[i]);
 }
 printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
