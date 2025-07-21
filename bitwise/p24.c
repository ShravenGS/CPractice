#include<stdio.h>
int main(){
	int num,pos,set;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the position");
	scanf("%d",&pos);
	set=(num|(1<<pos));
	printf("The value is %d",set);
}
