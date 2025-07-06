#include<stdio.h>
int palindrome(int num,int rev){
    int digit;
    if(num!=0){
        digit=num%10;
        rev=rev*10+digit;
        return palindrome(num/10,rev);
    }
    else{
        return rev;
    }
}
int main(){
    int num,k;
    printf("Enter a number");
    scanf("%d",&num);
    k=palindrome(num,0);
    if(k==num){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}
