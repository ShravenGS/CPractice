#include<stdio.h>
int main(int argc,char *argv[]){
	char ch;
	int choice;
	char str[20];
	if(argc<3){
		printf("Usage ./a.out");
		return 0;
	}
	FILE* fs=fopen(argv[1],"r");
	if(fs==NULL){
		printf("No source file available");
		return 1;
	}

	int i;
	for(i=2;i<argc;i++){
		FILE *fp;

		fp=fopen(argv[i],"r");
		if(fp!=NULL){
			fclose(fp);
			printf("File exist. Overwrite(1/0)");
			scanf("%d",&choice);
			if(choice!=1){
				printf("Skipped");
				continue;
			}
		}
		fp=fopen(argv[i],"w");
		while((ch=fgetc(fs))!=EOF){
			fputc(ch,fp);
		}
		fclose(fp);
		rewind(fs);
	}
}
