#include<stdio.h>
#include<stdlib.h>

int string_length(char s[]){
	int i,len=0;
	for(i=0;s[i]!='\0';i++){
		len++;
	}
	return len;
}

void string_reverse(char o[],char r[]){
	int len=string_length(o),i;
	for(i=0;i<len;i++){
		r[i]=o[len-i-1];
	}
	r[len]='\0';
}

int main(){
	FILE *src,*dest;
	char ch;
	char word[100],reversed[100];
	int index=0;

	src=fopen("input.txt","r");
	if(src==NULL){
		printf("Error opening file");
		return 1;
	}

	dest=fopen("output.txt","w");
        if(dest==NULL){
                printf("Error opening file");
                return 1;
        }
	
	while((ch=fgetc(src))!=EOF){
		if(ch!=' '&&ch!='\n'&&ch!='\t'){
			word[index++]=ch;//build word
		}

		else{
			if(index>0){
				word[index]='\0';
				string_reverse(word,reversed);
				fputs(reversed,dest);
				index=0;
			}
			fputc(ch,dest);
		}
	}

	if(index>0){
               word[index]='\0';
               string_reverse(word,reversed);
               fputs(reversed,dest);
	}

	fclose(src);
	fclose(dest);

	printf("Completed\n");
	return 0;
}




