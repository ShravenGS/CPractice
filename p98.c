#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int a,b;
	if(argc>3){
		printf("Exceeded limits\n");
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("%d\n",a*b);
}
