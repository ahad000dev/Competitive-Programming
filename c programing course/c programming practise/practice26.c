#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void loop(n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n",i);
    }
}
int main() {
    int a ;
    scanf("%d",&a);
    loop(a);

    return 0;
}