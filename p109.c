#include<stdio.h>
#include<string.h>
int main(){
    int i,j=0,k,wordCount=0,length,l;
    char words[50][50],s[100];
    printf("Enter a sentence:\n");
    scanf("%[^\n]",s);
    getchar();
    length=strlen(s);
    for(i=0;i<length;i++){
         if(s[i]!=' '&&s[i]!='\0'){
             words[wordCount][j++]=s[i];
         }
         else{
             words[wordCount][j]='\0';
             wordCount++;
             j=0;
         }
    }
    words[wordCount][j] = '\0';
    wordCount++;
    /*printf("Reversed word\n");
    for(k=wordCount-1;k>=0;k--){
        printf("%s",words[k]);
        if(k>0){
            printf(" ");
        }
    }*/
    printf("Reversed letter in a sentence\n");
   /* for(k=0;k<wordCount;k++){
        l=strlen(words[k]);
        for(j=l-1;j>=0;j--){
        printf("%c",words[k][j]);
        }
        printf(" ");
    }*/
    for(k = wordCount - 1; k >= 0; k--){
        l=strlen(words[k]);
        for(j=l-1;j>=0;j--){
        printf("%c",words[k][j]);
        }
        printf(" ");
    }
}
