#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char ch,search[100];
	int count=0,bigline_len=0;
	FILE *fs;
	fs=fopen("input.txt","r");
	
	printf("Word search:");
	scanf("%s",search);

	while((ch=fgetc(fs))!=EOF){
		++count;
		if(ch=='\n'){
			if(count>bigline_len){
				bigline_len=count;
			}
			count=0;
		}
	}
	rewind(fs);

	char *a=malloc(bigline_len*sizeof(char));
	while((fgets(a,bigline_len,fs))!=NULL){
		if((strstr(a,search))!=NULL){
			printf("%s",a);
		}
	}
fclose(fs);
}

