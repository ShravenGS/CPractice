#include<stdio.h>
int main(){
	int sum=0,rem,num;
	printf("Enter the number");
	scanf("%d",&num);
	while(num!=0){
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("Sum=%d",sum);
}
