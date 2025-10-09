#include<stdio.h>
int main(){
	FILE *src,*dest;
	char ch;

	src=fopen("input.txt","r");
	if(src==NULL){
		printf("Error opening file");
		return 1;
	}

	dest=fopen("output.txt","w");
	if(dest==NULL){
		printf("Error creating destination file");
		fclose(src);
		return 1;
	}

	while((ch=fgetc(src))!=EOF){
		if(ch>='a'&&ch<='z'){
			ch=ch-32;
		}

		else if(ch>='A'&&ch<='Z'){
			ch=ch+32;
		}
		fputc(ch,dest);
	}
	printf("Completed\n");
	fclose(src);
	fclose(dest);
	return 0;
}
