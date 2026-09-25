#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int val = 1;
    int space=n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = val; j >= 1 ; j--)
        {
            printf("%d",j);
        }
        printf("\n");
        val++;
        space--;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
