#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n ; i++)
    {   
        scanf("%d",&a[i]);
    }
    int i = 0;
    int j = n-1;
    
    while (i<=j)
    {
        if (i<j)
        {
            printf("%d %d ",a[i],a[j]);
            a[i]=
        }
        else
        {
            printf("%d",a[i]);
            
        }

        i++;
        j--;
    }

    return 0;
}