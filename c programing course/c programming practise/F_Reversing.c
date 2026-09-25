#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int s[n];
    for (int i = 0; i <n; i++)
    {
        scanf("%d",&s[i]);
    }
    int i =0;
    int j=n-1;
    int temp=0;
    while (i<j)
    {
        temp = s[i];
        s[i]=s[j];
        s[j] =temp;
        i++;
        j--;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ",s[k]);
    }
    return 0;
}