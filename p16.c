#include<stdio.h>
int main(){
	int num,i,product,temp;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=1;i<=10;i++){
		product=num*i;
		printf("%d\n", product);
	}
}

