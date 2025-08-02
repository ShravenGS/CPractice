#include<stdio.h>
int main(){
	FILE *fp;
	char ch;
	int new_word=1;

	fp=fopen("input.txt","r");
	if(!fp){
		printf("error file opening");
		return 1;
	}

	while((ch=fgetc(fp))!=EOF){
		if(ch==' '||ch=='\n'||ch=='\t'){
			new_word=1;
			printf("%c",ch);
		}
		else{
			if(new_word==1&&ch>='a'&&ch<='z'){
				ch=ch-32;
			}
			new_word=0;
			printf("%c",ch);
		}
	}
	fclose(fp);
	return 0;
}


