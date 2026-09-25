#include<stdio.h>
int main(){

    for(int i =0;i<20;i++){
        if(i%2==0){
            printf("%d even number\n",i);
        }
        else{
            printf("%d odd number\n",i);
        }
    }
    for(int j =0 ; j<=10;j++){
        if(j==5){
            break;
        }
        printf("hi - %d\n",j);
    }
}