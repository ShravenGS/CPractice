#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int a,b;
	if(argc>2){
		printf("Exceeded limits\n");
	}
	a=atoi(argv[1]);
	if(a%2==0){
		printf("Even number\n");
	}
	else{
		printf("Odd number\n");
	}
}
