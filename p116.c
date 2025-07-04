#include<stdio.h>
int main(){
    int num,i;
    printf("Enter the number:");
    scanf("%d",&num);
    if((num>0)&&(num&(num-1))==0){
        printf("Power of 2");
    }
    else{
        printf("Not a power of 2");
    }
}