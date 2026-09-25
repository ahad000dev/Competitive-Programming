#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch;
    scanf("%c",&ch);
    if(ch>='A'&& ch<='Z'){
        int low = ch +32;
        printf("%c",low);
    }
    else if (ch>='a'&&ch<='z')
    {
        int up = ch - 32;
        printf("%c",up);
    }
    return 0;
}