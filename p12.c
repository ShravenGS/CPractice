#include<stdio.h>
int main(){
	int fact=1,num,i;
	printf("Enter a number");
	scanf("%d",&num);
	i=1;
	while(i<=num){
		fact*=i;
		i++;

	}
	printf("Factorial=%d",fact);
}

