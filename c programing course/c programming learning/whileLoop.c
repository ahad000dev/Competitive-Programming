#include<stdio.h>
int main(){
    int i = 0;
    while(i<=10){
        printf("hello %d\n",i);
        i += 1;
    }
    int j = 0;
    do{
        printf("%d\n",j);
        j++;
    }while(j<=10);
}