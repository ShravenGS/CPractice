#include <stdio.h>
int prime(int n){
    int isPrime=1,i,j;
        for(i=2;i<n/2;i++){
                if(n%i==0){
                    return 0;
                }
        }
return 1;
}
int main() {
    int num,k;
    printf("Enter the number");
    scanf("%d",&num);
    k=prime(num);
    if(k){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }

    return 0;
}

