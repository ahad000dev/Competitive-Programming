#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 1; j <= m; j++)
    {

        int a= 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]==j)
            {
                a+=1;
            }
        }
    
        printf("%d\n",a);
    }
    return 0;
}