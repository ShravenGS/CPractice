//Writing a string using fputs()
#include<stdio.h>
int main(){
	FILE *fp=fopen("input.txt","w");

	fputs("This is a test\n",fp);
	fputs("Second line goes here\n",fp);

	fclose(fp);
	return 0;
}
