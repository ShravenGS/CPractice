#include<stdio.h>
int main(){
	FILE *fp,*temp;
	char ch;
	int line_no,current_line=1;
	printf("Enter line to remove");
	scanf("%d",&line_no);

	fp=fopen("input.txt","r");
	if(!fp){
		printf("No source file");
		return 1;
		}

	temp=fopen("output.txt","w");
	if(!temp){
		printf("Can't create temporary file");
		fclose(fp);
		return 1;
	}

	while((ch=fgetc(fp))!=EOF){
		if(current_line!=line_no){
			fputc(ch,temp);
		}

		if(ch=='\n'){
			current_line++;
		}
	}
	fclose(fp);
	fclose(temp);
}

