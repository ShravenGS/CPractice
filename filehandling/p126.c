#include<stdio.h>
int main(){
        FILE *fs;
        int character=0,count=0,line=1,biglength=0,bigline=1;
        char ch;
        fs=fopen("input.txt","r");
        if(fs==NULL){
                printf("Source file does not exist\n");
                return 1;
        }
        while((ch=fgetc(fs))!=EOF){
                ++character;
                count++;
                if(ch=='\n'){
                        if(count>biglength){
                                biglength=count;
                                bigline=line;
                        }
                        line++;
                        count=0;
                }
        }
        if(count>0){
                if(count>biglength){
                                biglength=count;
                                bigline=line;
                        }
        }
        fclose(fs);
        printf("Total characters:%d\n",character);
        printf("Longest line number:%d\n",bigline);
        printf("Length of longest line:%d\n",biglength);
}
