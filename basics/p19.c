#include<stdio.h>
#include<math.h>
int main(){
	int i,sum=0,digit=0,rem,temp,num;
	printf("Enter the number");
	scanf("%d",&num);
	temp=num;
	while(temp!=0){
		digit++;
		temp/=10;
	}
	temp=num;
	while(temp!=0){
		rem=temp%10;
		sum+=pow(rem,digit);
		temp/=10;
	}
	if(sum==num){
		printf("Armstrong number");
	}
	else{
		printf("Not an armstrong number");
	}
}
