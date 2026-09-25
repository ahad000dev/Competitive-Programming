#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    char str[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%c",&str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}