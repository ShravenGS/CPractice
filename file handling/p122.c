#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
	FILE *fp;
	char lines[1000][1000];
	int i,j;
	int count=0;
	char temp[1000];
	if (argc!=2){
		printf("No source file");
		return 1;
	}

	fp=fopen(argv[1],"r");
	if(fp==NULL){
		printf("Error opening file");
		return 1;
	}

	while(fgets(lines[count],1000,fp)){
		count++;
	}
	fclose(fp);

	for(i=0;i<count;i++){
		for(j=i+1;j<count;j++){
			if(strcmp(lines[i],lines[j])>0){
				strcpy(temp,lines[i]);
				strcpy(lines[i],lines[j]);
				strcpy(lines[j],temp);
			}
		}
	}

	printf("\nSorted lines\n");
	for(i=0;i<count;i++){
		printf("%s",lines[i]);
	}
	return 0;
}

