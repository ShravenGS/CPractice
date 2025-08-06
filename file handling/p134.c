#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","r");
	if(fp==NULL){
		printf("Cannot open file\n");
		return 1;
	}

	/*
	fseek(fp,5,SEEK_SET);
	char ch=fgetc(fp);
	printf("Character at 5th position from the beginning:%c\n",ch);
*/
	/*fseek(fp,-5,SEEK_END);
	char ch=fgetc(fp);
	printf("Character at 5th position from the end:%c\n",ch);*/

	fseek(fp,2,SEEK_CUR);
	char ch=fgetc(fp);
	printf("Current position character:%c",ch);
	fclose(fp);
	return 0;
}
