#include<stdio.h>
int main(){
	int num,i,j,isPrime=1;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num<=1){
		printf("Invalid");
	}
	else{
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			isPrime=0;
			break;
		}
		}
	if(isPrime){
		printf("Prime number");
	}
	else{
		printf("Not a prime number");
	}
}
}


