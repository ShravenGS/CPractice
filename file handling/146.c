#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void remove_newline(char str[]){
	int i=0;
	while(str[i]!='\0'){
		if(str[i]=='\n'){
			str[i]='\0';
			break;
		}
		i++;
	}
}

void bubble_sort(char lines[][1000],int n){
	char temp[1000];
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i;j++){
			if(strcmp(lines[j],lines[j+1])>0){
				strcpy(temp,lines[j]);
				strcpy(lines[j],lines[j+1]);
				strcpy(lines[j+1],temp);	
					
			}
		}
	}
}

int main(){
	FILE *fp;
	char lines[1000][1000];
	int count=0,i;

	fp=fopen("input.txt","r");
	if(fp==NULL){
		printf("Cannot fetch the file");
		return 1;
	}


	while(fgets(lines[count],1000,fp)!=NULL && count<1000){
		remove_newline(lines[count]);
		count++;
	}

		fclose(fp);

		bubble_sort(lines,count);

		printf("\nSortedlines\n");
		for(i=0;i<count;i++){
			printf("%s\n",lines[i]);
		}

	return 0;
}

