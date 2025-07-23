#include<stdio.h>
#include<string.h>
int main(){
        FILE *fp;
        char ch,search[50],word[50];
        int i=0,count=0;
        printf("Enter the word to search");
        scanf("%s",search);

        for (int j=0;search[j]!='\0';j++){
                if(search[j]>='A' && search[j]<='Z'){
                        search[j]+=32;
                }
        }
        fp=fopen("input.txt","r");
        if(!fp){
                printf("File not found");
                return 1;
        }

        while(fscanf(fp,"%s",word)==1){
                for(i=0;word[i]!='\0';i++){
                        if(word[i]>='A'&&word[i]<='Z'){
                                word[i]+=32;
                        }
                }

                        if(strcmp(word,search)==0){
                                count++;
                        }
        }
        fclose(fp);
        printf("The word appeared %d times\n",count);

}
