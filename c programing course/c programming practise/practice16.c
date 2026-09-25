#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    
    int f = a % 10;
    int l = a/10;
    if (f%l==0||l%f==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
        
    }

    return 0;
}