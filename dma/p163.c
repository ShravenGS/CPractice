#include <stdio.h>
#include<stdlib.h>
int main(){
    char **str;
    int i;
    str=(char**)malloc(5*sizeof(char *));
    if(str==NULL){
        printf("Memeory allocation failed");
        return 1;
    }
    for(i=0;i<5;i++){
        str[i]=(char *)malloc(sizeof(char));
         if(str[i]==NULL){
        printf("Memeory allocation failed");
        return 1;
            }
        }
    printf("Enter strings");
    for(i=0;i<5;i++){
        scanf("%s",str[i]);
    }
    for(i=0;i<5;i++){
        printf("%s \n",str[i]);
    }
    for(i=0;i<5;i++){
        free(str[i]);
    }
    free(str);
     return 0;  
        
}
