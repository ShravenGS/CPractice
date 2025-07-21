#include <stdio.h>
int fact(int n){
    int fact=1,i=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    return fact;
}
int main() {
    int num,k;
    printf("Enter the number");
    scanf("%d",&num);
    k=fact(num);
    printf("%d",k);

    return 0;
}
