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
int strong(int n, int sum){
    int rem,k;
    if(n!=0){
    rem=n%10;
    k=factorial(rem,1,1);
    sum+=k;
    return strong(n/10,sum);
    }
    else{
        return sum;
    }
}
int main(){
    int num,k;
    printf("Enter a number:");
    scanf("%d",&num);
    k=strong(num,0);
    if(k==num){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
}
