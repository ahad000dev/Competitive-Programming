#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum1 = round(12.4);
    int sum2 = round(12.9);
    int sum3 = ceil(12.9);
    int sum4 = floor(12.9);
    int sum5 = sqrt(25);
    int sum6 = pow(4,3);
    int sum7 = abs(-54);
    printf("%d\n",sum1);
    printf("%d\n",sum2);
    printf("%d\n",sum3);
    printf("%d\n",sum4);
    printf("%d\n",sum5);
    printf("%d\n",sum6);
    printf("%d\n",sum7);
    return 0;
}