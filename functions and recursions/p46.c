#include<stdio.h>
#include<math.h>
int count(int num,int digit){
    if(num!=0){
        return count(num/10,digit+1);
    }
    else{
        return digit;
    }
}
int armstrong(int num,int k, int sum){
    int rem;
    if(num!=0){
        rem=num%10;
        sum+=pow(rem,k);
        return armstrong(num/10,k,sum);
    }
    else{
        return sum;
    }
}
int main(){
    int num,a,c;
    printf("Enter a number");
    scanf("%d",&num);
    if(num==0){
        c=1;
    }
    else{
        c=count(num,0);
    }
    a=armstrong(num,c,0);
    if(a==num){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }
}
