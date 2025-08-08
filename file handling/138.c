#include<stdio.h>
int main(){
	FILE *src ,*temp;
	char buffer[1000],new[1000];
	int replace,curr=1;
	printf("Enter the line number to replace");
	scanf("%d",&replace);

	getchar();

	printf("Enter the new content for line %d",replace);
	scanf("%[^\n]",new);

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
		if(curr==replace){
			fprintf(temp,"%s\n",new);
		}
		else{
			fputs(buffer,temp);
		}
		curr++;
	}

	fclose(src);
	fclose(temp);

	remove("input.txt");
	rename("temp.txt","input.txt");
	return 0;
}
