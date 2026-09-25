#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {   
        char s[10001];
        scanf("%s",s);
        int count_s =0;
        int count_c =0;
        int count_d =0;
        int len = strlen(s);
        for (int j = 0; j < len; j++)
        {
            if (s[j]>='0'&& s[j]<='9')
            {
                count_d++;
            }
            if (s[j]>='a'&& s[j]<='z')
            {
                count_s++;
            }
            if (s[j]>='A'&& s[j]<='Z')
            {
                count_c++;
            }
        }
                
            printf("%d %d %d\n",count_c,count_s,count_d);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
