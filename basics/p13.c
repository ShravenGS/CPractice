#include<stdio.h>
int main(){
	int num,rev=0,i,temp,digit;
	printf("Enter a number");
	scanf("%d",&num);
	while(num!=0){
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}
	printf("reversed number is:%d",rev);
}
