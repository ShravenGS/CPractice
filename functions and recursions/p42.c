#include<stdio.h>
int factorial(int n,int i,int fact){
    if(i<=n){
        
        return factorial(n,i+1,fact*i);
    }
    else{
        return fact;
    }
}
int main(){
    int num,k;
    printf("Enter a number");
    scanf("%d",&num);
    k=factorial(num,1,1);
    printf("%d",k);
}
