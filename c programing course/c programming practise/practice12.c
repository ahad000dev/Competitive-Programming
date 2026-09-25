#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int s;
    int pos=0, neg=0, ev=0,od=0; 
    for (int i = 1; i < n; i++)
    {
        scanf("%d ",&s);
            if (s>0)
            {
                pos +=1;
            }
            else if (s<0)
            {
                
                neg+=1;
            }
            if (s%2==0)
            {  
                ev +=1; 
                
            }
            else
            {
                od+=1;
            }
 
    }
    printf("Even: %d\n",ev);
    printf("Odd: %d\n",od);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}