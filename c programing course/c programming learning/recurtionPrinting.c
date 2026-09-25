#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void hello(int n)
{
    if (n==1)
    {
        printf("%d\n",n);
        return;
    }
    printf("%d\n",n);
    hello(n-1);

}

int main() {
    int n;
    scanf("%d",&n);
    hello(n);
    return 0;
}