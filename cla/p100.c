#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int num,i,max;
	if(argc<2){
		printf("Add more\n");
	}
	for(i=2;i<argc;i++){
		num=atoi(argv[i]);
		max=num;
		if(num>max){
			max=num;
		}
	}
	printf("%d\n",max);
}
