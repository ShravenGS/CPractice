#include<stdio.h>
#include<stdlib.h>
int string_length(char str[]){
	int i=0,len=0;
	while(str[i]!='\0'){
		len++;
	}
	return len;
}

int string_compare(char str1[],char str2[]){
	int i=0;
	while(str1[i]==str2[i]){
		if(str1[i]=='\0'){
			return 1;
		}
		i++;
	}
	return 0;
}

void string_copy(char dest[],char src[]){
	int i=0;
	while(src[i]!='\0'){
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
}

int main(){
	FILE *src,*temp;
	char word[100],replace[100],current[100];
	char ch;
	int index=0;

	printf("Enter the word to be replaced:");
	scanf("%s",word);
	printf("Enter the replacement word:");
	scanf("%s",replace);


	src=fopen("input.txt","r");
	if(src==NULL){
		printf("Error opening souce file");
		return 1;
	}

	temp=fopen("temp.txt","w");
	if(temp==NULL){
                printf("Error opening temp file");
		fclose(src);
                return 1;
        }

	while((ch=fgetc(src))!=EOF){
		if((ch!=' ')&&(ch!='\n')&&(ch!='\t')){
			current[index++]=ch;
		}
		else{
			current[index]='\0';

		if(string_compare(current,word)){
			fputs(replace,temp);
		}
		else{
			fputs(current,temp);
		}

		fputc(ch,temp);
		index=0;
		}
	}

	if(index>0){
		word[index]='\0';

                if(string_compare(current,word)){
                        fputs(replace,temp);
                }
                else{
                        fputs(current,temp);
                }
		
	}
	fclose(src);
	fclose(temp);
	remove("input.txt");
	rename("temp.txt","input.txt");
}
		
