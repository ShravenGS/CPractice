#include<stdio.h>
int fibo(int num,int a,int b){
    if(a<num){
        printf("%d ",a);
        return fibo(num,b,a+b);
    }
}
int main(){
    int num,k;
    printf("Enter a number");
    scanf("%d",&num);
    k=fibo(num,0,1);
    printf("%d" ,k);
}
