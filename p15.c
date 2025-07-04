#include<stdio.h>
int main(){
	int num,rev=0,digit,temp;
	printf("Enter the number");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		digit=num%10;
		rev=rev*10+digit;
		num/=10;
	}
	if(rev==temp){
		printf("Palindrome");
	}
	else{
		printf("Not a palindrome");
	}
}
