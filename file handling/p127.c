#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *fp,*fd;
	char ch;
	int new_word=1;
	int choice;

	fp=fopen("input.txt","r");
	fd=fopen("output.txt","r");
	if(!fp){
		printf("error file opening");
		return 1;
	}
	if(fd){
		fclose(fd);
		printf("File already exist. Do you want to overwrite(0/1)");
		scanf("%d",&choice);
		
		if(choice==0){
			printf("Operation cancelled");
			return 0;
		}
	}

	fd=fopen("output.txt","w");
	while((ch=fgetc(fp))!=EOF){
		if(ch==' '||ch=='\n'||ch=='\t'){
			new_word=1;
			fputc(ch,fd);
		}
		else{
			if(new_word==1&&ch>='a'&&ch<='z'){
				ch=ch-32;
			}
			new_word=0;
			fputc(ch,fd);
		}
	}
	fclose(fp);
	fclose(fd);
	return 0;
}


