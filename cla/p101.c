#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int min,i,num;
	min=atoi(argv[1]);
	for(i=1;i<argc;i++){
		num=atoi(argv[i]);
		if(num<min){
			min=num;
			}
	}
	printf("Minimum number=%d",min);
}
