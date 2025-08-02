#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	FILE *fp;
	char ch;
	int characters=0,words=0,lines=0;
	int in_word=0;

	if(argc!=2){
		printf("No source file");
		return 1;
	}

	fp=fopen(argv[1],"r");
	if(fp==NULL){
		printf("Error opening file");
		return 1;
	}

	while((ch=fgetc(fp))!=EOF){
		characters++;

		if(ch=='\n'){
			lines++;
		}

		if(ch==' '||ch=='\n'||ch=='\t'){
			in_word=0;
		}
		else if(in_word==0){
			in_word=1;
			words++;
		}
	}
	fclose(fp);
	printf("%d %d %d",lines,words,characters);
	return 0;
}
