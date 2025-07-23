#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char* argv[]){
        FILE *fp;
        char *a;
        int biglinelen=1024;
        if(argc<2){
                printf("No source file");
                return 0;
        }
        fp=fopen(argv[2],"r");
        if(fp==NULL){
                printf("Error opening file");
                return 1;
        }
        a=(char*)malloc(biglinelen);
        if(a==NULL){
                printf("Memory allocation failed");
                fclose(fp);
                return 1;
        }

        while(fgets(a,biglinelen,fp)!=NULL){
                if(strstr(a,argv[1])!=NULL){
                        printf("%s",a);
                }
        }
        free(a);
        fclose(fp);
        return 0;
}
