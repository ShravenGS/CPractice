#include<stdio.h>
int main(){
	unsigned int num,i,rev=0;
	printf("Enter the number");
	scanf("%u",&num);
	for(i=0;i<=31;i++){
		rev=rev<<1;
		rev|=(num&1);
		num=num>>1;
	}
	printf("Reversed number:%u",rev);
}

