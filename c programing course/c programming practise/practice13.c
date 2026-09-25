#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int s;
    int max = 0;
    int min = 0;
    scanf("%d\n",&s);
    for(int i=1;i<s;i++){
        int val;
        scanf("%d ",&val);
        if (val>max)
        {
            max=val  ;
        }
        else if (val<min)
        {
        min=val;
        }
    }
    printf("%d\n",max);
    printf("%d",min);
    return 0;
}