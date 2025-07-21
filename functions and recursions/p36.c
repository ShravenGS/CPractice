#include <stdio.h>
int fibo(int n){
    int a=0,b=1,c,i;
    for(i=0;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
    return a;
}
int main() {
    int num,k;
    printf("Enter the number");
    scanf("%d",&num);
    k=fibo(num);
        printf("%d",k);
}

