#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","r+");
	char ch;
	if(!fp){
		printf("File not found");
		return 1;
	}
	while((ch=fgetc(fp))!=EOF){
		fseek(fp,-1,SEEK_CUR);
	
		if(ch>='a'&&ch<='z'){
			fputc(ch-32,fp);
		}

		else if(ch>='A'&&ch<='Z'){
			fputc(ch+32,fp);
		}
		else{
			fputc(ch,fp);
		}

	}
	fclose(fp);
	return 0;
}
