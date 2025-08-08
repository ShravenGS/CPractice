#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *src,*temp;
	char ch;
	int newWord=1;
	src=fopen("input.txt","r");
	if(src==NULL){
		printf("Error opening file");
		return 1;
	}

	temp=fopen("temp.txt","w");
	if(temp==NULL){
		printf("Error opening temp file");
		fclose(src);
		return 1;
	}

	while((ch=fgetc(src))!=EOF){
		if((ch>='a'&&ch<='z')&&newWord){
			ch=ch-32;
			newWord=0;
		}
		else if(ch==' '||ch=='\n'||ch=='\t'){
			newWord=1;
		}
		else{
			newWord=0;
		}
	fputc(ch,temp);
	}
	fclose(src);
	fclose(temp);
	remove("input.txt");
	rename("temp.txt","input.txt");
	return 0;
}



