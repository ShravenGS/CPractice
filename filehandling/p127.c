#include<stdio.h>
int main(int argc, char *argv[]){
        char ch;
        FILE* fs,*fd;

        if(argc<3){
                printf("Source file not available");
                return 0;
        }
        fs=fopen(argv[1],"r");
        if(fs==NULL){
                printf("Error opening source file");
                return 1;
        }

        fd=fopen(argv[2],"r");
        if(fd==NULL){
                printf("Error opening source file");
                fclose(fs);
                return 1;
        }
        while((ch=fgetc(fs))!=EOF){
                fputc(ch,fd);
        }
        fclose(fs);
        fclose(fd);

        if(remove(argv[1]==0)){
                printf("File moved");
        }
        else{
                printf("File not moved");
        }
}
