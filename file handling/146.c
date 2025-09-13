#include<stdio.h>
#include<string.h>
void bubble_sort(char line[][1000],int n){
	char temp[1000];
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(strcmp(line[j],line[j+1])>0){
				strcpy(temp,line[j]);
				strcpy(line[j],line[j+1]);
				strcpy(line[j+1],temp);
			}
		}
	}
}

int main(){
	FILE *fp;
	char ch;
	char lines[1000][1000];
	int count=0,i=0;
	fp=fopen("data.txt","r");
	if(fp==NULL){
		printf("Cannotopen the sourcefile\n");
		return 1;
	}

	while((ch=fgetc(fp))!=EOF){
		if(ch=='\n'){
			lines[count][i]='\0';
			count++;
			i=0;
		}
		else{
			lines[count][i++]=ch;
		}
	}

	if(i>0){
		lines[count][i]='\0';
		count++;
	}

	fclose(fp);

	bubble_sort(lines,count);

	fp=fopen("data.txt","w");
        if(fp==NULL){
                printf("Cannotopen the sourcefile\n");
                return 1;
        }

	for(i=0;i<count;i++){
		fputs(lines[i],fp);
		fputc('\n',fp);
	}

	fclose(fp);

	return 0;
}
