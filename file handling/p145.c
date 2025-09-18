#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	if(argc<3){
		printf("./a.out usage");
		return 1;
	}
	char line[1024];
	int found=0;
	char *pattern=argv[1];
	int line_num=0;
	FILE* fp=fopen(argv[2],"r");
	if(fp==NULL){
		printf("Source file does not exist");
		return 1;
	}

	while(fgets(line,sizeof(line),fp)){
		line_num++;
		if(strstr(line,pattern)){
			printf("%d %s",line_num,line);
			found=1;
		}
	}
	fclose(fp);
	return found?1:0;
}
