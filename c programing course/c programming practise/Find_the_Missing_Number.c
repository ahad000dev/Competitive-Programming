#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        long long int m, a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int otherNum =  a*b*c;
        if (m==otherNum)
        {
            printf("%d\n",1);
    }
    else if (m==0)
    {
        printf("%d\n",0);
        
    }
    else if (m<otherNum)
    {
        printf("%d\n",-1);
    }
    else if (m>otherNum)
    {
        long long int missingNum = m / otherNum;
            long long int extraNum = m % otherNum;
            if (extraNum> 0)
            {
                printf("%d\n",-1);
            }
            else
            {
                printf("%lld\n",missingNum);
            }
        }
    }
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
