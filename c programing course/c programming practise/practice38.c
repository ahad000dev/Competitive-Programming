#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n ;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int con_2 =0;
    int con_3 =0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j]%2==0 && arr[j]%3==0)
        {
            con_2++;
        }
        else if (arr[j]%2==0)
        {
            con_2++;
        }
        else if (arr[j]%3==0)
        {
            con_3++;
        }

    }
    printf("%d %d",con_2,con_3);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
