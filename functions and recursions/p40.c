#include <stdio.h>
#include<math.h>
int fact(int n){
    int f=1,i=1;
    while(i<=n){
        f*=i;
        i++;
    }
return f;
}
int main() {
    int sum=0,num,k,rem,temp;
    printf("Enter the number");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        rem=temp%10;
        k=fact(rem);
        sum+=k;
        temp/=10;
    }
    if(sum==num){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
}

