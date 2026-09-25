#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int count_vowl(char a[],int i)
{
    if (a[i]=='\0')
    {
        return 0;
    }
    int count = count_vowl(a,i+1);
    if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' || a[i]=='i' || a[i]=='I' || a[i]=='o' || a[i]=='O' || a[i]=='u' || a[i]=='U' )
    {
        return count+1;
    }
    else
    {
        return count;
        
    }
}
int main() {
    char a[201];
    fgets(a,201,stdin);
    int total = count_vowl(a,0);
    printf("%d",total);
    return 0;
}