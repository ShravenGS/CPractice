#include<stdio.h>
int main(){
	int i;
FILE *fp=fopen("input.txt","w");
char ch='a';

for(i=0;i<5;i++){
	fputc(ch+i,fp);//Writes charcter from a to e
}
fclose(fp);
return 0;
}
