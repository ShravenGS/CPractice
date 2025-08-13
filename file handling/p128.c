#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","w");
	if(!fp){
		printf("File does not exist");
		return 1;
	}

	fputs("Hello",fp);
	fclose(fp);
	return 0;
}
