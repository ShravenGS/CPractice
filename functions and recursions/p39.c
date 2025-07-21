#include <stdio.h>
#include<math.h>
int count(int n){
    int rem,digit=0,temp;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        digit++;
        temp/=10;
    }
return digit;
}
int main() {
    int sum=0,num,k,rem,temp;
    printf("Enter the number");
    scanf("%d",&num);
    k=count(num);
    temp=num;
    while(temp!=0){
        rem=temp%10;
        sum+=pow(rem,k);
        temp/=10;
    }
    if(sum==num){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }
}

