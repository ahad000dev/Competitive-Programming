#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sum(int a , int b)
{
    int sum = a + b;
    return sum;

}
int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    int result = sum(x,y);
    printf("%d",result);
    return 0;
}