#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    char s[n][1000001];
    for (int i = 0; i < n; i++)
    {
        scanf("%s\n",&s);
        
    }
    for (int i = 0; i < n; i++)
    {
        // int len = strlen(s[i]);
        printf("%s",s[i]);
        // if (len>10)
        // {
        //     int mid =len -2;
        //     char last=s[i][len-1];
        //     char first= s[i][0];
        //     printf("%c%d%c",first,mid,last);
    
        // }
        // else
        // {
        //     printf("%s",s[i]);
        // }
        
    }
    return 0;
}