#include<stdio.h>
int main(){
	int num1,num2,op;
	printf("Enter the number 1:");
	scanf("%d",&num1);
	printf("Enter the number 2:");
        scanf("%d",&num2);
	printf("Enter the operation(1/2/3/4/5)");
        scanf("%d",&op);
	switch(op){
	case 1:printf("%d",num1+num2);
	       break;
	case 2:printf("%d",num1-num2);
	       break;
	case 3:printf("%d",num1*num2);
	       break;
	case 4:printf("%d",num1/num2);
	       break;
	case 5:printf("%d",num1%num2);
	       break;
	default:printf("Invalid operation");
		break;
	}
}
