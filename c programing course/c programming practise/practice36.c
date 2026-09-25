#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(char* a,int lenght)
{   
    int x = 0;
    int y =lenght-1;
    if (lenght != 0)
    {
        while (x<y)
        {
            if (a[x]!=a[y])
            {
                return 0;
            }
        x++;
        y--;
    }
}
return 1;
}

int main() {
    char a[1001];
    scanf("%s",a);
    int lenght= strlen(a);
    int flag = is_palindrome(a,lenght);
    if (flag==1)
    {
        printf("Palindrome");
        
    }else
    {
        printf("Not Palindrome");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
