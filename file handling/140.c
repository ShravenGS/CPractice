#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *file1,*file2,*merged;
	char ch;

	file1=fopen("file1.txt","r");
	if(file1==NULL){
		printf("Error opening file 1");
		return 1;
	}

	file2=fopen("file2.txt","r");
	if(file2==NULL){
		printf("Error opening file 2");
		return 1;
	}

	merged=fopen("merged.txt","w");
	if(merged==NULL){
		printf("Error creating merged file");
		fclose(file1);
		fclose(file2);
		return 1;
	}

	while((ch=fgetc(file1))!=EOF){
                fputc(ch,merged);
        }

	while((ch=fgetc(file2))!=EOF){
		fputc(ch,merged);
	}
	fclose(file1);
        fclose(file2);
	return 0;
}
