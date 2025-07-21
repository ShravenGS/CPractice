#include<stdio.h>
int prime(int num,int i){
   if(num<=1){
       return 0;
   }
   if(i>num/2){
       return 1;
   }
   if(num%i==0){
       return 0;
   }
return prime(num,i+1);
}
int main(){
    int num,k;
    printf("Enter a number");
    scanf("%d",&num);
    k=prime(num,2);
    if(k){
        printf("Prime");
    }
    else{
        printf("Not a prime number");
    }
}
