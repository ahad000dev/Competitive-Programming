#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000001];
    scanf("%s",&s);
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (s[i]==',')
        {
            s[i] = ' ';
        }
        if (s[i]<=90&&s[i]>=65)
        {
            s[i]= s[i] + 32;
        }
        else if(s[i]<=122&&s[i]>=97)
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    return 0;
}