#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    int m1[1001],m2[1001],d[1001];
    for (int i = 0; i < t; i++)
    {   
        scanf("%d %d %d",&m1[i],&m2[i],&d[i]);
    }
    for (int j = 0; j < t; j++)
    {
    int days = (m1[j]*d[j])/(m2[j]+m1[j]);
    int fewDay = d[j] - days;
    
    if (fewDay==0)
    {
        printf("%d\n",0);
    }
    else
    {
        printf("%d\n",fewDay);
    }
} 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
