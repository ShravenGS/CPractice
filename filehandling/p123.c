#include<stdio.h>
int main(){
        FILE *src,*dest;
        char ch;
        src=fopen("input.txt","r");
        if(src==NULL){
                printf("File does not exist");
                return 1;
        }

        dest=fopen("output.txt","w");
        if(dest==NULL){
                printf("Couldn't open the file");
                fclose(src);
                return 1;
        }

        while((ch=fgetc(src))!=EOF){
                if((ch>='A')&&(ch<='Z')){
                        ch=ch+32;
                }
                else if((ch>='a')&&(ch<='z')){
                        ch=ch-32;
                }
                fputc(ch,dest);
        }

        fclose(src);
        fclose(dest);
        printf("Completed");
        return 0;
}


/* In input.txt--> Hello
  Now in output.txt --> hELLO*/
