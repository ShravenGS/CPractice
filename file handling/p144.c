#include<stdio.h>
char ch;
int main(){
	FILE *fp;
	char ch;
	int characters=0,words=0,lines=0;
	int in_word=0;

	fp=fopen("input.txt","r");
	if(fp==NULL){
		printf("Error opening source file");
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

		printf("Characters:%d\n",characters);
		printf("Words:%d\n",words);
		printf("Lines:%d\n",lines);

		return 0;
}
