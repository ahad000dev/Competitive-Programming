#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,x;
    scanf("%d",&n);
    int a[n];
    int flag=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for (int j = 0; j < n; j++)
    {
        for (int k = j+1; k < n; k++)
        {
            if (a[j]+a[k]==x)
            {   
                flag=1;
                printf("yes, %d + %d = %d\n",a[j],a[k],x);
            }
        }
    }
    if (flag==0)
    {
        printf("no\n");
    }
    return 0;
}