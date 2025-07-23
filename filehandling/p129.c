#include<stdio.h>
int main(int argc, char *argv[]){
	FILE *fp;
	char ch;
	int characters=0,words=0,lines=0,in_word=0;
	if(argc!=2){
		printf("Usage:%s\n",argv[0]);
		return 0;
	}
	fp=fopen(argv[1],"r");
	if(fp==NULL){
		printf("Source file not accessible");
		return 1;
	}
	
	while((ch=fgetc(fp))!=EOF){
		characters++;
		
		if(ch=='\n'){
			lines++;
		}
			if((ch==' ')||(ch=='\t')||(ch=='\n')){
				in_word=0;
			}
			else if(in_word==0){
					in_word=1;
					words++;
				}
			}
	printf("%d %d %d %s\n",characters,lines,words,argv[1]);
	fclose(fp);
}
