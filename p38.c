#include <stdio.h>
int palindrome(int n){
    int temp,rem=0,digit;
    temp=n;
    while(temp!=0){
        digit=temp%10;
        rem=rem*10+digit;
        temp/=10;
    }
return rem;
}
int main() {
    int num,k;
    printf("Enter the number");
    scanf("%d",&num);
    k=palindrome(num);
        if(k==num){
            printf("Palindrome");
        }
        else{
            printf("Not a palindrome");
        }
}

