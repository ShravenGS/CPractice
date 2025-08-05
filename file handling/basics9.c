#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","r");
	if(fp==NULL){
		printf("File not found");
		return 1;
	}

	fseek(fp,0,SEEK_END);
	long size=ftell(fp);
	printf("File size %ld bytes\n",size);

	fclose(fp);
	return 0;
}
