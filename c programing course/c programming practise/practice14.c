#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        int val;
        scanf("%d",&val);
        while (val !=0)
        {
            printf("%d ",val%10);
            val /=10;
        }
    }

    return 0;
}