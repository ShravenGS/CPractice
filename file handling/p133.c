#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","r");

	int num;
	char name[50];
	float marks;

	fscanf(fp,"%d %s %f",&num,name,&marks);
	printf("num:%d,name:%s,marks:%f",num,name,marks);

	fclose(fp);
	return 0;
}
