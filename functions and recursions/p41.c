#include<stdio.h>
int reverse(int num,int rev){
    if(num!=0){
        return reverse(num/10,rev*10+num%10);
    }
    else{
        return rev;
    }
}
int main(){
    int num,k;
    printf("Enter a number");
    scanf("%d",&num);
    k=reverse(num,0);
    printf("%d",k);
}
