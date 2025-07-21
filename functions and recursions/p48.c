#include<stdio.h>
int perfect(int num,int i,int sum){
    if(i<num){
        if(num%i==0){
        sum+=i;
        }
    return perfect(num,i+1,sum);
}
else{
    return sum;
}
}

int main(){
    int num,k;
    printf("Enter a number:");
    scanf("%d",&num);
    k=perfect(num,1,0);
    if(k==num){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
}
