#include<stdio.h>
int main(){
	int num,pos,toggle;
	printf("Enter the number");
	scanf("%d",&num);
	printf("Enter the position");
	scanf("%d",&pos);
	toggle=(num^(1<<pos));
	printf("The value is %d",toggle);
}
