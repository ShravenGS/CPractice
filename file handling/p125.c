//Open and close file
#include<stdio.h>
int main(){
	FILE* fp= fopen("input.txt","w");
	if(fp==NULL){
		printf("File could not be opened");
		return 1;
	}
	printf("File opened successfully");
	fclose(fp);
	return 0;
}
