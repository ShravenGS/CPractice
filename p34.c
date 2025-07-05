#include <stdio.h>
int count(int n){
    int count=0,i,temp,rem;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        count++;
        temp/=10;
    }
    return count;
}
int main() {
    int num,k;
    printf("Enter the number");
    scanf("%d",&num);
    k=count(num);
    printf("%d",k);

    return 0;
}
