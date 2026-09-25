#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void fun(int* p)
{
    *p = 300;

}
int main() {
    int x=100;
    fun(&x);
    printf("%d",x);
    return 0;
}