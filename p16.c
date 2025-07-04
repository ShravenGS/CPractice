#include<stdio.h>
int main(){
	int num,i,product,temp;
	printf("Enter a number");
	scanf("%d",&num);
	temp=num;
	for(i=1;i<=10;i++){
		product=temp*i;
		printf("%d\n", product);
	}
}

