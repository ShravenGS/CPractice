#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","w");

	int num=101;
	char name[]="Shraven GS";
	float marks=84.5;

	fprintf(fp, "%d %s %.2f",num,name,marks);

	fclose(fp);
	return 0;
}
