#include<stdio.h>
#include<string.h>
void reverse(char str[]){
	int len=strlen(str);
	int i;
	char t;
	for(i=0;i<len/2;i++){
		t=str[i];
		str[i]=str[len-1-i];
		str[len-i-1]=t;
	}
}
#define MAX 100

int main(){
	FILE *src,*dest;
	int i,j;
	char word[MAX];
	src=fopen("data.txt","r");
	dest=fopen("output.txt","w");
	if(!src||!dest){
		printf("Error opening file\n");
		return 1;
	}

	char ch;
	i=0;
	while((ch=fgetc(src))!=EOF){
		if(ch==' '||ch=='\n'||ch=='\t'){
			if(i>0){
			word[i]='\0';
			reverse(word);
			fputs(word,dest);
			i=0;
			}
			fputc(ch,dest);
		}

		else{
			word[i++]=ch;
		}
	}

	if(i>0){
		word[i]='\0';
                reverse(word);
                fputs(word,dest);
	}


	fclose(src);
	fclose(dest);
	return 0;
}
