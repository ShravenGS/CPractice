#include<stdio.h>
#include<string.h>
#define MAX 100
int main(){
	FILE *src,*temp;
	int i,j;
	char search[MAX],replace[MAX],word[MAX];

	printf("Enter the word:");
	scanf("%s",search);

	printf("Enter the replacement word:");
	scanf("%s",replace);

	src=fopen("data.txt","r");
	temp=fopen("temp.txt","w");
	if(!src||!temp){
		printf("Error opening file\n");
		return 1;
	}

	char ch;
	i=0;
	while((ch=fgetc(src))!=EOF){
		if(ch==' '||ch=='\n'){
			word[i]='\0';

		if(strcmp(word,search)==0){
			fputs(replace,temp);
		}
		else{
			fputs(word,temp);
		}
		fputc(ch,temp);
		i=0;
		}

		else{
			word[i++]=ch;
		}
	}

	if(i>0){
		word[i]='\0';

                if(strcmp(word,search)==0){
                        fputs(replace,temp);
                }
                else{
                        fputs(word,temp);
                }
	}

	fclose(src);
	fclose(temp);
	remove("data.txt");
	rename("temp.txt","data.txt");

	return 0;
}
