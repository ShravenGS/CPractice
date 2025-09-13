#include<stdio.h>
void removespaces(char str[]){
    int i,j=0;
    int spaceFlag=0;
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j++]=str[i];
            spaceFlag=0;
        }
        else if(!spaceFlag){
            str[j++]=' ';
            spaceFlag=1;
        }
    }
    if(j>0&&str[j-1]==' '){
        j--;
    }
    str[j]='\0';
}

int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]",&str);
    
    removespaces(str);
    printf("%s",str);
    return 0;
}
