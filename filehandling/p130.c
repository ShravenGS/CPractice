#include<stdio.h>
#include<string.h>
int main(){
        char word[50], ch;
        int len,i;

        FILE *fp=fopen("input.txt","r+");
        if (fp==NULL){
                printf("Source file is not available");
                return 1;
        }

        while(fscanf(fp,"%s",word)==1){
                len=strlen(word);
                fseek(fp,-len,SEEK_CUR);
                if(word[0]>='a'&&word[0]<='z'){
                        word[0]-=32;
                }

                for(i=1;i<len;i++){
                         if(word[i]>='A'&&word[i]<='Z'){
                                word[i]+=32;
                                }
                }


        fprintf(fp,"%s",word);
        fgetc(fp);
        }
        fclose(fp);
}
