#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE *src, *temp;
	char buffer[1000];
	int del,curr=1;
	printf("Enter the line number to delete");
	scanf("%d",&del);

	src=fopen("input.txt","r");
	if(src==NULL){
		printf("Error opening file");
		return 1;
	}

	temp=fopen("temp.txt","w");
        if(temp==NULL){
                printf("Error opening temp file");
		fclose(src);
                return 1;
        }

	while(fgets(buffer,sizeof(buffer),src)){
		if(curr!=del){
			fputs(buffer,temp);
		}
		curr++;
	}

	fclose(src);
	fclose(temp);

	remove("input.txt");
	rename("temp.txt","input.txt");

	printf("Completed\n");
	return 0;
}
