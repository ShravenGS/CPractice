#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
	int a,b,c;
	if(argc>3){
		printf("Exceeded limit");
		return 0;
	}
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	printf("%d\n",a+b);
}

