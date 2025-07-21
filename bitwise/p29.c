#include<stdio.h>
int main(){
	int num,i,count=0;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=31;i>=0;i--){
		if((num>>i)&1){
			count++;
		}
	}
	printf("%d",count);
}
