#include<stdio.h>
int string_lastocc(char s[],char ch){
    int i,count=-1;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            count=i;
        }
    }
    return count;
}
int string_firstocc(char s[],char ch){
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i]==ch){
            return i;    
        }
    }
    return -1;
}

int main(){
    char str1[20],ch;
    int k,n;
    n=sizeof(str1)/sizeof(str1[0]);
    printf("Enter the 1st string:");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter the character needed to counted in a string:");
    scanf("%c",&ch);
    // k=string_lastocc(str1,ch);
    k=string_firstocc(str1,ch);
    printf("The first appearance of given char in a string:%d",k);
    //printf("The last appearance of given char in a string:%d",k);
}
