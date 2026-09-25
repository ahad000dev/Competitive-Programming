#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ,s=1;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf("*");
        }
        printf("\n");
        s++;
    }
    return 0;
}