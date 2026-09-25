#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    char s[1000001];
    for (int i = 0; i <n; i++)
    {
        scanf("%s\n",&s);
    }

     for (int i = 0; i < n; i++)
    {   
      
            printf("%s",s[i]);
        }
    return 0;
}