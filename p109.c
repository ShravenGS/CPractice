#include<stdio.h>
int main(){
	int num,pos,clear;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the position");
	scanf("%d",&pos);
	clear=(num&~(1<<pos));
	printf("The value is %d",clear);
}
