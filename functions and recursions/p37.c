#include <stdio.h>
int sumofdigits(int n){
    int temp,rem,sum=0;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        sum+=rem;
        temp/=10;
    }
return sum;
}
int main() {
    int num,k;
    printf("Enter the number");
    scanf("%d",&num);
    k=sumofdigits(num);
        printf("%d",k);
}

