#include<stdio.h>
int main(){
    for(int i = 0;i<=20;i=i+3){
        if(i==9){
            printf("%d\n",10);
            continue;
        }
        if(i==12){
            printf("%d\n",14);
            continue;
        }
        printf("%d\n",i);
    }
}