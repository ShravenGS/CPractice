#include<stdio.h>
int main(){
	int count=0,digit,num;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num!=0){
	digit=num%10;
	count++;
	num/=10;
	}
	printf("The no of digits given is:%d",count);
}
