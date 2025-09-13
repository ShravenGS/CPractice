#include<stdio.h>
#define MAX 100

int main(){
	FILE *src,*temp;
	int i,j;
	char word[1000];
	int replace,curr=1;
	
	printf("Enter the line to replace:");
	scanf("%d",&replace);
	getchar();
	printf("Enter the new content for replacing:");
	scanf("%[^\n]",word);

	src=fopen("data.txt","r");
	temp=fopen("temp.txt","w");
	if(!src||!temp){
		printf("Error opening file\n");
		return 1;
	}


	char ch;
	char buffer[1000];
	i=0;
	while((ch=fgetc(src))!=EOF){
		if(ch=='\n'){
			buffer[i]='\0';
			if(curr==replace){
				fputs(word,temp);
			}
			else{
				fputs(buffer,temp);
			}
			fputc('\n',temp);
			i=0;
			curr++;
		}	else{
			buffer[i++]=ch;
		}
	}

	if(i>0){
		 buffer[i]='\0';
                        if(curr==replace){
                                fputs(word,temp);
                        }
                        else{
                                fputs(buffer,temp);
                        }

		}


	fclose(src);
	fclose(temp);
	remove("data.txt");
	rename("temp.txt","data.txt");
	return 0;
}
