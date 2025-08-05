#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","r");
	if(!fp){
		printf("File does not exist");
		return 1;
	}

	fputs("Hello",fp);
	fclose(fp);
	return 0;
}
