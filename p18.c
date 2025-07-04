#include<stdio.h>
int main(){
	int a=0,b=1,c,num,i;
	printf("Enter a number");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}
}


