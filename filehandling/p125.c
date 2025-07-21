#include<stdio.h>
int main(int argc,char *argv[]){
                FILE *src,*dest;
                char ch;
                if(argc<3){
                        printf("No source file present in the directory");
                        return 1;
                }
                src=fopen(argv[1],"r");
                dest=fopen(argv[2],"w");
                /*
                 for(i=2;i<argc;i++){
                        dest=fopen(argv[i],"w");
                        }
                  */
                if(src==NULL||dest==NULL){
                        printf("Cannot perform the operation");
                        return 1;
                }
                //rewind(src);
                while((ch=fgetc(src))!=EOF){
                                fputc(ch,dest);
                        }
                        fclose(src);
                        fclose(dest);
                        printf("Completed\n");
                        }

