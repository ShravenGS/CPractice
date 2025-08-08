#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *src, *dest[10];//Max 10 files can we copied
	char destNames[10][100];
	int n,i,j;
	char ch;

	src=fopen("input.txt","r");
	if(src==NULL){
		printf("Error opening source file");
		return 1;
	}

	printf("Enter the number of destination files:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Enter name of destination file:");
		scanf("%s",destNames[i]);
		dest[i]=fopen(destNames[i],"w");
		if(dest[i]==NULL){
			printf("Cannot create a file");
			fclose(src);

			for(j=0;j<i;j++){
				fclose(dest[j]);
			}
			return 1;
		}
	}

	while((ch=fgetc(src))!=EOF){
		for(i=0;i<n;i++){
			fputc(ch,dest[i]);
		}
	}
	fclose(src);
	for(i=0;i<n;i++){
		fclose(dest[i]);
	}
	printf("Completed\n");
	return 0;
}
