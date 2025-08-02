#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[]){
	FILE *fp;
	char line[1000];

	if(argc!=3){
		printf("No source file");
		return 1;
	}

	fp=fopen(argv[2],"r");
	if(fp==NULL){
		printf("Error opening file");
		return 1;
	}

	while(fgets(line,1000,fp)!=NULL){
			if(strstr(line,argv[1])!=NULL){
				printf("%s",line);
			}
	}
	
	fclose(fp);
	return 0;
}
