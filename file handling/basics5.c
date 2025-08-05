//Reading a string using fgets()
#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","r");
	char line[1000];

	while(fgets(line,sizeof(line),fp)){
		printf("%s",line);
	}

	fclose(fp);
	return 0;
}
