#include<stdio.h>
int main(){
	FILE *fs=fopen("input.txt","r");
	FILE *fd=fopen("output.txt","w");
	char ch;
	while((ch=fgetc(fs))!=EOF){
			fputc(ch,fd);
	}
	fclose(fd);
	fclose(fs);
}


