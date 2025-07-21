#include<stdio.h>
int factorial(int n,int i,int fact){
    if(i<=n){
        fact*=i;
        i++;
        return factorial(n,i,fact);
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
