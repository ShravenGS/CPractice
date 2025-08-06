#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","w+");
	fputs("Hello this is a test",fp);
	rewind(fp);
	char ch;
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}

/*w and w+ will erase the file if it exists.

a and a+ will always add to the end, even if you do fseek().

r+ is the safest for editing content in place (but the file must exist).

Always check if (fp == NULL) after fopen() to avoid crash.*/
