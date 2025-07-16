#include<stdio.h>
#include<string.h>
int main(){
    char input[500];
    char words[50][50];
    int i,j=0,k=0,wordCount=0;
    char temp[50];
    printf("Enter a sentence:\n");
    scanf("%[^\n]",input);
    for(i=0;input[i]!='\0';i++){
        if(input[i]!=' '){
            words[wordCount][j++]=input[i];
        }
        else{
            words[wordCount][j]='\0';
            wordCount++;
            j=0;
        }
    }
    words[wordCount][j]='\0';
    wordCount++;
    if(strlen(words[0])!=strlen(words[wordCount-1])){
        printf("Error:First and last words don't match");
        return 1;
    }
    strcpy(temp,words[0]);
    strcpy(words[0],words[wordCount-1]);
    strcpy(words[wordCount-1],temp);
    printf("Output: ");
    for(k=0;k<wordCount;k++){
        printf("%s ",words[k]);
    }
    printf("\n");
}
