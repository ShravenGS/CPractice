#include<stdio.h>
int main(){
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
		printf("Character is vowel");
	}
	else{
		printf("Character is consonant");
	}
}
