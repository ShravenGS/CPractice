/*Removing line in a file*/
#include<stdio.h>
int main(){
        FILE *src,*dest;
        char ch;
        int line,current=1;
        printf("Enter the number of line needed to remove");
        scanf("%d",&line);
        src=fopen("input.txt","r");
        dest=fopen("output.txt","w");
        if(src==NULL||dest==NULL){
                printf("Cannot edit the file");
                return 1;
        }
        while((ch=fgetc(src))!=EOF){
                if(current!=line){
                fputc(ch,dest);
                 }

                if(ch =="\n"){
                        current++;
                }
        }
        fclose(src);
        fclose(dest);
        printf("Completed");
}
