#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	printf("%c",ch^(1<<5));
}
