#include<stdio.h>
int main(){
    int a,b,carry;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number");
    scanf("%d",&b);
    while(b!=0){
        carry=a&b;
        a^=b;
        b=carry<<1;
    }
    printf("Sum=%d",a);
}
