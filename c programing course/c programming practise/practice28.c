#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void acn(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<n; j++)
        {   
            if (a[i]<a[j])
            {
                int temp = a[i];
                a[i]=a[j];
                a[j]= temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        
        printf("%d\n",a[i]);
    }
    
}
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    acn(a,n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}